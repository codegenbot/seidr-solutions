#include <iostream>
#include <iomanip>

double probability(int n, int m) {
    if(n <= 1 || m <= 1) {
        return 0.0;
    }
    double totalOutcomes = n * m;
    double favorableOutcomes = (n - 1) * m;
    return favorableOutcomes / totalOutcomes;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    double result = probability(n, m);
    std::cout << std::fixed << std::setprecision(2) << result << std::endl;
    return 0;
}