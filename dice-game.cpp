#include <iostream>
#include <iomanip>

long double probability(int n, int m) {
    long double totalOutcomes = n * m;
    long double favorableOutcomes = 0;

    for (int i = 1; i <= n; i++) {
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

    long double result = probability(n, m);
    std::cout << std::fixed << std::setprecision(8) << result << std::endl;

    return 0;
}