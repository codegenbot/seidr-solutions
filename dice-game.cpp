#include <iostream>

double probabilityOfPeterWinning(int n, int m) {
    long long totalOutcomes = (n + 1) * (m + 1);
    long long peterWins = 0;

    for (int i = 1; i <= n-1; i++) {
        for (int j = 1; j <= m-1; j++) {
            if (i > j) {
                peterWins++;
            }
        }
    }

    return static_cast<double>(peterWins) / totalOutcomes;
}

int main() {
    int n, m;
    std::cin >> n >> m;

    double probability = probabilityOfPeterWinning(n, m);
    std::cout << probability << std::endl;

    return 0;
}