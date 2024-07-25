#include <iostream>

double getProbability(int n, int m) {
    double total = (double)n * m;
    return 1.0 - ((n / (double)n) * (m / (double)m));
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(2) << getProbability(n, m) << std::endl;
    return 0;
}