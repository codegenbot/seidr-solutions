```cpp
#include <iostream>
#include <iomanip>

double probability(int n, int m);

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(2) << probability(n, m) << std::endl;
}

double probability(int n, int m) {
    double totalOutcomes = (double)(n + m - 1);
    double favorableOutcomes = (double)n * m;
    
    return static_cast<double>(favorableOutcomes) / totalOutcomes;
}