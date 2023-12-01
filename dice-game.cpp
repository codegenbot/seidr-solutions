#include <iostream>

double diceGameProbability(int n, int m) {
    int totalCombinations = n * m;
    int peterWins = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                peterWins++;
            }
        }
    }

    return static_cast<double>(peterWins) / totalCombinations;
}

int main() {
    int n, m;
    std::cin >> n >> m;

    std::cout << diceGameProbability(n, m) << std::endl;

    return 0;
}