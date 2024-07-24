#include <vector>
#include <iostream>

double diceGame(int n, int m) {
    double total = (double)n * m;
    double peterWins = 0;

    for (int i = m + 1; i <= n; i++) {
        peterWins += (i - m);
    }

    return peterWins / total;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << fixed << setprecision(4) << diceGame(n, m) << "\n";
    return 0;
}