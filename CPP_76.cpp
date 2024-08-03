#include <cmath>
#include <iostream>

bool is_simple_power(int x, int n) {
    double y = pow(n, ceil(log2(x)));
    return (y == x);
}

int main() {
    int x, n;
    std::cout << "Enter a number and its power: ";
    std::cin >> x >> n;
    if (is_simple_power(x, n)) {
        std::cout << x << " is a simple power of " << n << std::endl;
    } else {
        std::cout << x << " is not a simple power of " << n << std::endl;
    }
    return 0;
}