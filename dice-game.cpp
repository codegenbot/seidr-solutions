#include <iostream>
#include <iomanip>

double probabilityOfHigherRoll(int n, int m) {
    double totalOutcomes = n * m;
    double favorableOutcomes = (n-1) * m;
    favorableOutcomes += (m > 1) ? (n-1) : 0;
    return favorableOutcomes / totalOutcomes;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    double probability = probabilityOfHigherRoll(n, m);
    std::cout << std::fixed << std::setprecision(8) << probability << std::endl;
    return 0;
}