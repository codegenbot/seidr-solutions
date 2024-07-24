#include <iostream>

double probability(int n, int m) {
    double total = (n + m);
    return 1.0 - (m / static_cast<double>(total));
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(5) << probability(n, m) << std::endl;
    return 0;
}