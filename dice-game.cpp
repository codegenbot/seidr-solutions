#include <iostream>

double probabilityOfPeterWinning(int n, int m) {
    double totalOutcomes = n * m;
    double peterWinsOutcomes = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                peterWinsOutcomes++;
            }
        }
    }

    return peterWinsOutcomes / totalOutcomes;
}

int main() {
    int n, m;
    std::cin >> n >> m;

    double probability = probabilityOfPeterWinning(n, m);
    std::cout << probability << std::endl;

    return 0;
}