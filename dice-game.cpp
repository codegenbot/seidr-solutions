#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;

    double probability = 1.0 * (n + 1) / (2 * n) * (m - 1) / m + 1.0 / (2 * n);

    std::cout << std::fixed << std::setprecision(8) << probability << std::endl;

    return 0;
}