#include <iostream>

double getProbability(int n, int m) {
    return (m - 1.0) / (n * m);
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(6) << getProbability(n, m) << std::endl;
    return 0;
}