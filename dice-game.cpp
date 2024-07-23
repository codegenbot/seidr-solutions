#include <algorithm>

double diceGame(int n, int m) {
    double total = n * m;
    double petersWin = 0.0;

    for (int i = m - 1; i >= 1; i--) { 
        petersWin += (n - i) / (double)(n * m);
    }

    return petersWin;
}

int main() {
    return diceGame(6, 6);
}