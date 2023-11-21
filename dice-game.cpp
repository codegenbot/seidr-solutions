#include <iostream>
#include <iomanip>

double probabilityOfPeterWinning(int n, int m) {
    double totalOutcomes = n * m;
    double favorableOutcomes = (n > m) ? (n - m) : (n - 1);
    return favorableOutcomes / totalOutcomes;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(8) << probabilityOfPeterWinning(n, m) << std::endl;
    return 0;
}