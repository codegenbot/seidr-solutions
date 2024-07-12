#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;

    double probability = 0.0;
    for (int i = 1; i <= n; ++i) {
        probability += (double)i * (m-1) / (n * m);
    }

    std::cout << std::fixed << std::setprecision(8) << 1.0 - probability / n << std::endl;

    return 0;
}