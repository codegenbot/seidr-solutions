#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;

    double probability = 0.0;
    for (int i = 1; i <= n; ++i) {
        double tmp = 0.0;
        for (int j = 1; j <= m; ++j) {
            tmp += (double)i / n * (double)j / m;
        }
        probability += tmp * (m - 1) / m;
    }

    std::cout << std::fixed << std::setprecision(8) << probability << std::endl;

    return 0;
}