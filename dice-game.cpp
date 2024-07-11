#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;

    std::cout << std::fixed << std::setprecision(8) << static_cast<double>((n * (m - 1) - (m - 1))) / (n * m) << std::endl;

    return 0;
}