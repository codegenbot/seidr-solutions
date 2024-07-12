#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    int n, m;
    std::cin >> n >> m;

    double probability = 1.0 - pow((double)(n - 1) / m, n);

    std::cout << std::fixed << std::setprecision(8) << probability << std::endl;

    return 0;
}