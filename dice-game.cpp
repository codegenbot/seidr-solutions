#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;

    long double probability = ((long double)(n - 1) * (long double)(m)) / (2.0 * n * m);

    std::cout << std::fixed << std::setprecision(8) << probability << std::endl;

    return 0;
}