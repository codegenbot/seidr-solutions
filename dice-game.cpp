#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;

    double probability = (double)(std::max(0, n - 1) * std::max(0, m - 1)) / (n * m);

    std::cout << std::fixed << std::setprecision(2) << probability << std::endl;

    return 0;
}