#include <iostream>
#include <cmath>

bool is_simple_power(int x, int n) {
    double y = pow(n, 1.0 / double(n));
    return (int)y == x;
}

int main() {
    int num, power;
    std::cout << "Enter a number and its power: ";
    std::cin >> num >> power;
    
    if(is_simple_power(num, power)) {
        std::cout << "The number is a simple power." << std::endl;
    } else {
        std::cout << "The number is not a simple power." << std::endl;
    }
    
    return 0;
}