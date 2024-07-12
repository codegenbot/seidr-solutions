#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;

    double probability = double(n) / 2 / n * double(n + 1) / 2 / m;

    std::cout << std::fixed << std::setprecision(8) << probability << std::endl;

    return 0;
}