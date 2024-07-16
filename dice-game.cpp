#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;

    long double probability = 0.0L;
    for (int i = 1; i <= n; ++i) {
        int count = std::min(i - 1, m);
        probability += (1.0L * count) / (1.0L * n * m);
    }

    std::cout << std::fixed << std::setprecision(8) << probability << std::endl;

    return 0;
}