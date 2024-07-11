#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;

    double probability = 0.0;
    for (int i = 1; i < n + 1; ++i) {
        probability += static_cast<double>(i) / static_cast<double>(n) * (static_cast<double>(m) - 1) / static_cast<double>(m);
    }

    std::cout << std::fixed << std::setprecision(8) << probability << std::endl;

    return 0;
}