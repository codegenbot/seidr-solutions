#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    double probability = 0.0;

    std::cin >> n >> m;

    for (int i = 1; i <= n; ++i) {
        probability += static_cast<double>(i - 1) / n * (m - 1) / (n * m);
    }

    std::cout << std::fixed << std::setprecision(9) << probability << std::endl;

    return 0;
}