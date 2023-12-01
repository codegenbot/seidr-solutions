#include <iostream>
#include <iomanip>

double probabilityOfHigherRoll(int n, int m) {
    long double totalOutcomes = (long double)n * m;
    long double favorableOutcomes = 0;

    for (long long i = 1; i <= n; i++) {
        for (long long j = 1; j <= m; j++) {
            if (i > j) {
                favorableOutcomes++;
            }
        }
    }

    return favorableOutcomes / totalOutcomes;
}

int main() {
    int n, m;
    std::cin >> n >> m;

    double probability = probabilityOfHigherRoll(n, m);
    std::cout << std::fixed << std::setprecision(4) << probability << std::endl;

    return 0;
}