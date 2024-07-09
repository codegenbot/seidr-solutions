#include <iostream>
#include <cmath>

bool is_simple_power(int x, int n) {
    double y = pow(n, log(x) / log(n));
    return (y == int(y));
}

int main() {
    int x;
    int n;
    std::cout << "Enter the value of x: ";
    std::cin >> x;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    if (is_simple_power(x, n)) {
        std::cout << "x is a simple power of n" << std::endl;
    } else {
        std::cout << "x is not a simple power of n" << std::endl;
    }
    return 0;
}