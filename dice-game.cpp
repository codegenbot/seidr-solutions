#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;

    long double probability = (n - 1.0) / (2.0 * n);

    std::cout << std::fixed << std::setprecision(8) << probability << std::endl;

    return 0;
}