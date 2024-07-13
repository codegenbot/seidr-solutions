#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;

    if (n <= 1) {
        std::cout << "0.0" << std::endl;
    } else if (m <= 1) {
        std::cout << "1.0" << std::endl;
    } else {
        double probability = 0.0;
        for (int i = 1; i <= n; ++i) {
            probability += (double)(n - i) / n * (double)m / (m + n) * pow((double)(m - 1) / m, i - 1);
        }
        std::cout << std::fixed << std::setprecision(2) << probability << std::endl;
    }

    return 0;
}