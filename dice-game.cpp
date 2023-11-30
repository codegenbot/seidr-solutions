#include <iostream>
#include <iomanip>

double diceGameProbability(int n, int m) {
    double totalOutcomes = n * m;
    double favorableOutcomes = (n-1) * (m-1);
    return favorableOutcomes / totalOutcomes;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(8) << diceGameProbability(n, m) << std::endl;
    return 0;
}