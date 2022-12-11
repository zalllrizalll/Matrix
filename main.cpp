#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

void tambah(int m, int n)
{
    int matriksA[10][10], matriksB[10][10],hasil[10][10];
    int baris,kolom,i,j;
    baris = m;
    kolom = n;

    cout<<endl;
    cout << "Masukkan elemen matrix A : " <<endl;
    for(i = 0; i < baris; i++)
    {
        for(j = 0; j < kolom; j++)
        {
            cout << "Matrix A[" << i << "][" << j << "] : ";
            cin >> matriksA[i][j];
        }
    }
    cout<<endl;
    cout << "Masukkan elemen matrix B : " <<endl;
    for(i = 0; i < baris; i++)
    {
        for(j = 0; j < kolom; j++)
        {
            cout << "Matrix B[" << i << "][" << j << "] : ";
            cin >> matriksB[i][j];
        }
    }
    cout << endl;
    // Menampilkan elemen Matrix A
    cout << "Matrix A : " << endl;
    for(i = 0; i < baris; i++)
    {
        for(j = 0; j < kolom; j++)
        {
            cout << matriksA[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;
    // Menampilkan elemen Matrix B
    cout << "Matrix B : " << endl;
    for(i = 0; i < baris; i++)
    {
        for(j = 0; j < kolom; j++)
        {
            cout << matriksB[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;
    // Operasi penjumlahan
    cout << "Hasil penjumlahan matrix : "<<endl;
    for(i = 0; i < baris; i++)
    {
        for(j = 0; j < kolom; j++)
        {
            hasil[i][j] = matriksA[i][j] + matriksB[i][j];
            cout << hasil[i][j] << "\t";
        }
        cout << endl;
    }

}
void kurang(int m, int n)
{
    int matriksA[10][10], matriksB[10][10],hasil[10][10];
    int baris,kolom,i,j;
    baris = m;
    kolom = n;

    cout<<endl;
    cout << "Masukkan elemen matrix A : " <<endl;
    for(i = 0; i < baris; i++)
    {
        for(j = 0; j < kolom; j++)
        {
            cout << "Matrix A[" << i << "][" << j << "] : ";
            cin >> matriksA[i][j];
        }
    }
    cout<<endl;
    cout << "Masukkan elemen matrix B : " <<endl;
    for(i = 0; i < baris; i++)
    {
        for(j = 0; j < kolom; j++)
        {
            cout << "Matrix B[" << i << "][" << j << "] : ";
            cin >> matriksB[i][j];
        }
    }
    cout << endl;
    // Menampilkan elemen Matrix A
    cout << "Matrix A : "<< endl;
    for(i = 0; i < baris; i++)
    {
        for(j = 0; j < kolom; j++)
        {
            cout << matriksA[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;
    // Menampilkan elemen Matrix B
    cout << "Matrix B : "<<endl;
    for(i = 0; i < baris; i++)
    {
        for(j = 0; j < kolom; j++)
        {
            cout << matriksB[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;
    // Operasi pengurangan
    cout << "Hasil pengurangan matrix : "<<endl;
    for(i = 0; i < baris; i++)
    {
        for(j = 0; j < kolom; j++)
        {
            hasil[i][j] = matriksA[i][j] - matriksB[i][j];
            cout << hasil[i][j] << "\t";
        }
        cout << endl;
    }
}
void kali(int p, int q, int r, int s)
{
    int matriksA[10][10], matriksB[10][10], hasil[10][10];
    int barisPertama, kolomPertama, barisKedua, kolomKedua, jumlah;
    barisPertama = p;
    kolomPertama = q;
    barisKedua = r;
    kolomKedua = s;

    if (kolomPertama != barisKedua)
    {
        cout << endl;
        cout << "Matriks tidak dapat dikalikan satu sama lain!\n";
    }
    else
    {
        cout<<endl;
        cout << "Masukkan elemen matrix A : "<<endl;
        for(int i = 0; i < barisPertama; i++)
        {
            for(int j = 0; j < kolomPertama; j++)
            {
                cout << "Matrix A[" << i << "][" << j << "] : ";
                cin >> matriksA[i][j];
            }
        }
        cout<<endl;
        cout << "Masukkan elemen matrix B : "<<endl;
        for(int i = 0; i < barisKedua; i++)
        {
            for(int j = 0; j < kolomKedua; j++)
            {
                cout << "Matrix B[" << i << "][" << j << "] : ";
                cin >> matriksB[i][j];
            }
        }
        cout << endl;
        // Menampilkan elemen Matrix A
        cout << "Matriks A : "<<endl;
        for(int i = 0; i < barisPertama; i++)
        {
            for(int j = 0; j < kolomPertama; j++)
            {
                cout << matriksA[i][j] << "  ";
            }
            cout << endl;
        }
        cout << endl;
        // Menampilkan elemen Matrix B
        cout << "Matrix B : " <<endl;
        for(int i = 0; i < barisKedua; i++)
        {
            for(int j = 0; j < kolomKedua; j++)
            {
                cout << matriksB[i][j] << "  ";
            }
            cout << endl;
        }
        // Operasi perkalian
        for(int i = 0; i < barisPertama; i++)
        {
            for(int j = 0; j < kolomKedua; j++)
            {
                for(int k = 0; k < barisKedua; k++)
                {
                    jumlah += matriksA[i][k] * matriksB[k][j];
                }
                hasil[i][j] = jumlah;
                jumlah = 0;
            }
        }
        cout << endl;
        cout << "Hasil perkalian matriks : "<<endl;
        for(int i = 0; i < barisPertama; i++)
        {
            for(int j = 0; j < kolomKedua; j++)
            {
                cout << hasil[i][j] << "\t";
            }
            cout << endl;
        }
    }
}

void transpose(int m, int n)
{
    int matriks[10][10], matriks_transpose[10][10];
    int baris, kolom, i, j;
    baris = m;
    kolom = n;

    cout<<endl;
    cout << "Masukkan elemen Matrix : "<<endl;
    for(i = 0; i < baris; i++)
    {
        for(j = 0; j < kolom; j++)
        {
            cout << "Matrix[" << i << "][" << j << "] : ";
            cin >> matriks[i][j];
        }
    }
    cout << endl;
    // Menampilkan matriks sebelum Transpose
    cout << "Sebelum Transpose : "<<endl;
    for(i = 0; i < baris; i++)
    {
        for(j = 0; j < kolom; j++)
        {
            cout << matriks[i][j] << "  ";
        }
        cout << endl;
    }
    // Matriks dilakukan Transpose
    for(i = 0; i < baris; i++)
    {
        for(j = 0; j < kolom; j++)
        {
            matriks_transpose[j][i] = matriks[i][j];
        }
    }
    cout << endl;
    // Menampilkan hasil matriks setelah di Transpose
    cout << "Setelah Transpose : "<<endl;
    for(i = 0; i < kolom; i ++)
    {
        for(j = 0; j < baris; j++)
        {
            cout << matriks_transpose[i][j] << "  ";
        }
        cout << endl;
    }
}

int determinant( int matrix[10][10], int n) {
   int det = 0;
   int submatrix[10][10];
   if (n == 2)
   return ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));
   else {
      for (int x = 0; x < n; x++) {
         int subi = 0;
         for (int i = 1; i < n; i++) {
            int subj = 0;
            for (int j = 0; j < n; j++) {
               if (j == x)
               continue;
               submatrix[subi][subj] = matrix[i][j];
               subj++;
            }
            subi++;
         }
         // Recursive
         det = det + (pow(-1, x) * matrix[0][x] * determinant( submatrix, n - 1 ));
      }
   }
   return det;
}

int tampil_menu()
{
    int menu;
    cout << "====================================\n";
    cout << "\tPROGRAM MENU MATRIKS\n\n";
    cout << "Nama  : Muhammad Rizal Pratama\nNIM   : A11.2021.13329\nKelas : A11.43UG2\n";
    cout << "====================================\n";
    cout << "=\t  1. Penjumlahan\t   ="<<endl;
    cout << "=\t  2. Pengurangan\t   ="<<endl;
    cout << "=\t  3. Perkalian\t\t   ="<<endl;
    cout << "=\t  4. Transpose\t\t   ="<<endl;
    cout << "=\t  5. Determinant\t   ="<<endl<<endl;

    return menu;
}

int main()
{
    int matrix[10][10];
    string menu;
    int pil{}, baris{}, kolom{}, n;
    int barisPertama{}, barisKedua{}, kolomPertama{}, kolomKedua{};

    do
    {
        system("cls");
        menu = tampil_menu();
        cout << "Masukkan Pilihan : ";cin>>pil;
        switch(pil)
        {
            case 1:
            system("cls");
            {
                cout << "Masukkan jumlah baris matrix : ";
                cin >> baris;
                cout << "Masukkan jumlah kolom matrix : ";
                cin >> kolom;
                tambah(baris,kolom);
                getch();
                break;
            }
            case 2:
            system("cls");
            {
                cout << "Masukkan jumlah baris matrix : ";
                cin >> baris;
                cout << "Masukkan jumlah kolom matrix : ";
                cin >> kolom;
                kurang(baris,kolom);
                getch();
                break;
            }
            case 3:
            system("cls");
            {
                cout << "Masukkan jumlah baris matrix pertama\t: ";
                cin >> barisPertama;
                cout << "Masukkan jumlah kolom matrix pertama\t: ";
                cin >> kolomPertama;
                cout << "Masukkan jumlah baris matrix kedua\t: ";
                cin >> barisKedua;
                cout << "Masukkan jumlah kolom matrix kedua\t: ";
                cin >> kolomKedua;
                kali(barisPertama, kolomPertama, barisKedua, kolomKedua);
                getch();
                break;
            }
            case 4:
            system("cls");
            {
                cout << "Masukkan jumlah baris matrix : ";
                cin >> baris;
                cout << "Masukkan jumlah kolom matrix : ";
                cin >> kolom;
                transpose(baris, kolom);
                getch();
                break;
            }
            case 5:
            system("cls");
            {
                cout << "Masukkan size of Matrix : ";
                cin >> n;
                cout << endl;
                cout << "Input elements of Matrix : "<<endl;
                for(int i = 0; i < n; i++)
                {
                    for(int j = 0; j < n; j++)
                    {
                        cout << "Matrix[" << i << "][" << j << "] : ";
                        cin >> matrix[i][j];
                    }
                }
                cout<<endl;
                cout << "Matrix Inputan : "<<endl;
                for(int i = 0; i < n; i++)
                {
                    for(int j = 0; j < n; j++)
                    {
                        cout << matrix[i][j] << "  ";
                    }
                    cout << endl;
                }
                cout << endl;
                cout << "Determinant dari Matriks tersebut yaitu " << determinant(matrix, n);
                getch();
                break;
            }
            default:
            system("cls");
            {
                cout<<endl;
                cout << "Maaf, pilihan Anda tidak tersedia !"<<endl;
                cout << "Press Any Key ... "<< endl;
                getch();
                return 0;
                break;
            }
        }

    }while(pil!=6);

    return 0;
}
