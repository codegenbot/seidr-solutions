#include <iostream>

double probability(int n, int m) {
    if (n <= m)
        return 0;
    return 1.0 * (m + 1) / (n + m);
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << std::fixed << std::setprecision(1) << probability(n, m) << "\n";
    return 0;
}