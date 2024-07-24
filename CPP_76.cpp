```cpp
#include <cmath>
#include <iostream>
#include <string>

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
        std::string s1 = std::to_string(y);
        std::string s2 = std::to_string(x);
        if(s1 == s2)
            std::cout << "True" << std::endl; 
        else
            std::cout << "False" << std::endl; 
        if (is_simple_power(x, n))
            std::cout << "True" << std::endl; 
        else
            std::cout << "False" << std::endl; 
    }
    return 0;
}