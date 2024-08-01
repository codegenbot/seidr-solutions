#include <iostream>

double diceGame(int n, int m) {
    double total = (double)n * m;
    double petersWin = 0;

    for (int i = 1; i <= n - 1; i++) {
        petersWin += (double)(n - i) / total;
    }

    return petersWin;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << fixed << setprecision(2) << diceGame(n, m) << "\n";
    return 0;
}