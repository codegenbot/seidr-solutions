#include <algorithm>

double diceGame(int n, int m) {
    double total = 1.0 * n * m / (m*n);
    double petersWin = 0.0;

    for (int i = 1; i <= std::min(m, n); i++) { 
        petersWin += (i+1) / (double)(n*m-i-1+i);
    }

    return petersWin;
}