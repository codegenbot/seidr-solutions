#include <vector>
#include <iostream>

double diceGame(int n, int m) {
    double total = (double)n * m;
    double petersWins = 0;

    for (int i = m + 1; i <= n; i++) {
        petersWins += (double)i / total;
    }

    return petersWins;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << fixed << setprecision(6) << diceGame(n, m) << "\n";
    return 0;
}