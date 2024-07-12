#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    int n, m;
    std::cin >> n >> m;

    double probability = 0.0;
    for (int j = 1; j <= m; ++j) {
        probability += 1.0 / m * (pow((double)j / m, n) - pow((double)(j-1) / m, n));
    }

    std::cout << std::fixed << std::setprecision(8) << 1.0 - probability << std::endl;

    return 0;
}