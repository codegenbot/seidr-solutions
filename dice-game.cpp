#include <iostream>
#include <iomanip>

double diceGameProbability(int n, int m) {
    double totalOutcomes = static_cast<double>(n) * m;
    double favorableOutcomes = 0;
    for (int i = 1; i <= n; ++i) {
        favorableOutcomes += (i - 1) * m;
    }
    return favorableOutcomes / totalOutcomes;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(2) << diceGameProbability(n, m) << std::endl;
    return 0;
}