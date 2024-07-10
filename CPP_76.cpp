```cpp
#include <cmath>
#include <iostream>

bool is_simple_power(int x, int n) {
    if (n == 0) return false; 
    double y = pow(n, log(x) / log(n));
    return std::abs(y - x) < 1e-9; 
}

int main() {
    std::cout << "Enter a number: ";
    int tempX;
    std::cin >> tempX;

    std::cout << "Enter another number: ";
    int nTemp;
    std::cin >> nTemp;

    if(nTemp != 0) {
        if(is_simple_power(tempX, nTemp))  
            std::cout << tempX << " is a simple power of " << nTemp << std::endl;
        else
            std::cout << tempX << " is not a simple power of " << nTemp << std::endl;
    } else {
        std::cout << "n cannot be zero." << std::endl;
    }

    return 0;
}