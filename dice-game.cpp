#include <iostream>
#include <iomanip>

int main() {
    int n, m;
    std::cin >> n >> m;

    long double probability = static_cast<long double>((n-m)/(n*m - 1));

    std::cout << std::fixed << std::setprecision(8) << probability << std::endl;

    return 0;
}