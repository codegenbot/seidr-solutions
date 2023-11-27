#include <iostream>

long double probabilityOfPeterWinning(int n, int m) {
    long double totalOutcomes = n * m;
    long double peterWinsOutcomes = 0;

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

    long double probability = probabilityOfPeterWinning(n, m);
    std::cout << probability << std::endl;

    return 0;
}