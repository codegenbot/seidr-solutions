#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;

    long double probability = static_cast<long double>(n*(n+1)/2 - m) / static_cast<long double>(n * m - 1);

    std::cout << std::fixed << std::setprecision(8) << probability << std::endl;

    return 0;
}