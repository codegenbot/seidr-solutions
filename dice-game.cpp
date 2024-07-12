#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;

    double probability = 0.0;
    for (int i = 1; i <= n; ++i) {
        probability += (double)i / n * pow((m - 1) / (double)m, n - 1);
    }

    std::cout << std::fixed << std::setprecision(8) << probability << std::endl;

    return 0;
}