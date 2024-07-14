#include <algorithm>
#include <iostream>
#include <numeric>

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << __gcd(std::abs(a), std::abs(b)) << std::endl;
    return 0;
}