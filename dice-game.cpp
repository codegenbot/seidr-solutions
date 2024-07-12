#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;

    long double probability = 0.0;
    for(int i = 1; i < n + 1; ++i) {
        probability += 1.0 / n * (m - i + 1) / m;
    }

    std::cout << std::fixed << std::setprecision(8) << probability << std::endl;

    return 0;
}