#include <iostream>
#include <cmath>
#include <cassert>

bool is_simple_power(int base, int num) {
    if (base < 2 || num < 2) return false;
    double root = std::pow(num, 1.0 / base);
    return std::abs(std::round(root) - root) < 1e-9;
}

int main(){
    int base, num;
    std::cin >> base >> num;
    std::cout << std::boolalpha << is_simple_power(base, num) << std::endl;
    return 0;
}