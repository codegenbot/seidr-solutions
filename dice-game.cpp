#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;

    long double probability = static_cast<long double>((n - 1) * m) / static_cast<long double>(2 * n * m);

    std::cout << std::fixed << std::setprecision(8) << probability << std::endl;

    return 0;
}