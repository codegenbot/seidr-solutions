#include <iostream>

double probability(int n, int m) {
    double total = (n + m - 1);
    return (m - 1.0) / total;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(6) << probability(n, m) << std::endl;
    return 0;
}