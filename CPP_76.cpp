```cpp
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
    int x;
    int n;
    std::cout << "Enter a number: ";
    std::cin >> x;
    std::cout << "Enter another number: ";
    std::cin >> n;
    if(n == 0)
        std::cout << (x == 1 ? "True" : "False") << std::endl;
    else {
        double y = pow(n, log(x) / log(n));
        std::cout << ((y == x) ? "True" : "False") << std::endl;
        if (is_simple_power(x, n))
            std::cout << std::to_string(true) << std::endl; 
        else
            std::cout << std::to_string(false) << std::endl; 
    }
    return 0;
}