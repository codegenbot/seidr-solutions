#include <iostream>

bool is_simple_power(int x, int n) {
    if (n == 1) {
        return x == 1;
    }
    
    int power = 1;
    while (power <= x) {
        if (power == x) {
            return true;
        }
        power *= n;
    }
    
    return false;
}

int main() {
    std::cout << is_simple_power(1, 4) << std::endl; // true
    std::cout << is_simple_power(2, 2) << std::endl; // true
    std::cout << is_simple_power(8, 2) << std::endl; // true
    std::cout << is_simple_power(3, 2) << std::endl; // false
    std::cout << is_simple_power(3, 1) << std::endl; // false
    std::cout << is_simple_power(5, 3) << std::endl; // false
    
    return 0;
}