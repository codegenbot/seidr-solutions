#include <iostream>
#include <cmath>

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << abs(a % 10) * abs(b % 10) << std::endl;
    return 0;
}