#include <iostream>
#include <iomanip>

double diceProbability(int n, int m) {
    double totalOutcomes = n * m;
    double favorableOutcomes = 0;

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

    std::cout << std::fixed << std::setprecision(2);
    std::cout << diceProbability(n, m) << std::endl;

    return 0;
}