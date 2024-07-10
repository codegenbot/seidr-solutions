```cpp
#include <cmath>
#include <iostream>

bool is_simple_power(int x, int n) {
    if (n == 0) return false; 
    double y = pow(n, log(x) / log(n));
    return std::abs(y - x) < 1e-9;
}

int main() {
    int tempX, n;
    std::cout << "Enter a number: ";
    std::cin >> tempX;

    std::cout << "Enter another number (n): ";
    std::cin >> n;

    if (n != 0) {
        if(is_simple_power(tempX, n))  
            std::cout << std::string(std::to_string(tempX)) << " is a simple power of " << std::to_string(n) << std::endl;
        else
            std::cout << "Error: " << std::string(std::to_string(tempX)) << " is not a simple power of " << std::to_string(n) << std::endl;
    } 
    else {
        std::cout << "n cannot be zero." << std::endl;
    }
}