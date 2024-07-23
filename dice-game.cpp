#include <algorithm>

double diceGame(int n, int m) {
    double total = n * m;
    double petersWin = 0.0;

    for (int i = 1; i <= std::min(m, n-1); i++) { 
        petersWin += (n - i) / (total);
    }

    return petersWin;

}

int main() {
    return diceGame(6, 6);
}