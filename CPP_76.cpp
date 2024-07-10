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
    int nTemp;
    std::cin >> nTemp;

    if(nTemp != 0) {
        // Convert integer to string
        std::string strN = std::to_string(nTemp);

        std::cout << strN << std::endl;

        if(is_simple_power(tempX, nTemp))  
            std::cout << tempX << " is a simple power of " << nTemp << std::endl;
        else
            std::cout << tempX << " is not a simple power of " << nTemp << std::endl;
    } else {
        std::cout << "n cannot be zero." << std::endl;
    }

    return 0;
}