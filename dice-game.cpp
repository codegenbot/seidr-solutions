#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    double probability = 0.0;

    std::cin >> n >> m;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < m; ++j) {
            probability += static_cast<double>(n - i) / static_cast<double>(n) * static_cast<double>(m - j) / static_cast<double>(m);
        }
    }

    std::cout << std::fixed << std::setprecision(9) << probability << std::endl;

    return 0;
}