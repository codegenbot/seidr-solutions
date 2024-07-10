```cpp
#include <cmath>
#include <iostream>
#include <string>

bool is_simple_power(int x, int n);

bool is_simple_power(int x, int n) {
    double y = pow(n, log(x) / log(n));
    return (y == x);
}

int main() {
    std::cout << "Enter a number: ";
    int tempX;
    std::cin >> tempX;

    std::cout << "Enter another number: ";
    int tempN;
    std::cin >> tempN;
    
    if(is_simple_power(tempX, tempN))
        std::cout << tempX << " is a simple power of " << tempN << std::endl;
    else
        std::cout << tempX << " is not a simple power of " << tempN << std::endl;

    return 0;
}