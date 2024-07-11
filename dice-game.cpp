#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;

    std::cout << std::fixed << std::setprecision(8) << static_cast<double>((n + 1) / (2.0 * n)) << std::endl;

    return 0;
}