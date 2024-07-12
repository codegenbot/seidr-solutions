#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;

    double probability = 0.0;
    for (double i = 1; i <= n; ++i) {
        for (double j = 1; j <= m; ++j) {
            probability += ((n - i + 1) * (m - j)) / (n * m);
        }
    }

    std::cout << std::fixed << std::setprecision(8) << probability << std::endl;

    return 0;
}