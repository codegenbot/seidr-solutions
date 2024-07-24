#include <cmath>
#include <iostream>

bool is_simple_power(int x, int y) {
    if (y == 1)
        return true;
    while (y > 1) {
        if (x % y != 0)
            return false;
        x /= y;
        y--;
    }
    return true;
}

int main() {
    int x, n;
    std::cout << "Enter a number: ";
    std::cin >> x;
    std::cout << "Enter another number: ";
    std::cin >> n;
    if (n == 0) {
        std::cout << (x == 1 ? "True" : "False") << std::endl;
    } else {
        double y = pow(n, log(x) / log(n));
        std::cout << (y == x) << std::endl; 
        if (is_simple_power(x, n))
            std::cout << "True" << std::endl; 
        else
            std::cout << "False" << std::endl; 
    }
    return 0;
}