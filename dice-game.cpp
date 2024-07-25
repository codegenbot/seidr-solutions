#include <iostream>

double probability(int n, int m) {
    double total = (n + m);
    return 1.0 - ((double)m / total);
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(1) << probability(n, m) << "\n";
    return 0;
}