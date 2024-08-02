#include <iostream>

double probability(int n, int m) {
    return static_cast<double>(min(n, m)) / (n * m);
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << fixed << setprecision(2) << 1 - probability(m, n) << '\n';
    return 0;
}