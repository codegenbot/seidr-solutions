```cpp
#include <cmath>
#include <iostream>
#include <string>

bool is_simple_power(int x, int n);

bool is_simple_power(int x, int int) {
    double y = pow(n, log(x) / log(n));
    return (y == x);
}

int main() {
    std::cout << "Enter a number: ";
    int tempX;
    std::cin >> tempX;

    int n; 
    std::cout << "Enter another number: ";
    std::cin >> n;

    if(is_simple_power(tempX, n))  
        std::cout << tempX << " is a simple power of " << n << std::endl;
    else
        std::cout << tempX << " is not a simple power of " << n << std::endl;

    return 0;
}