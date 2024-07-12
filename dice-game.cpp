#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;

    long double probability = static_cast<long double>((n - 1) * n / 2) / static_cast<long double>(n * m);

    std::cout << std::fixed << std::setprecision(8) << probability << std::endl;

    return 0;
}