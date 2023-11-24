#include <iostream>
#include <iomanip>

long double probabilityOfHigherRoll(int n, int m) {
    long double totalOutcomes = n * m;
    long double favorableOutcomes = 0;

    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= m; j++) {
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

    long double probability = probabilityOfHigherRoll(n, m);
    std::cout << std::fixed << std::setprecision(7) << probability << std::endl;

    return 0;
}