#include <iostream>

double calculateProbability(int n, int m) {
    double totalOutcomes = (double)n * m;
    double petersWins = 0;

    // Calculate Peter's wins
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < m && j < i; j++) {
            petersWins++;
        }
    }

    return petersWins / totalOutcomes;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(1) << calculateProbability(n, m) << std::endl;
    return 0;
}