#include <cmath>
#include <iostream>

bool is_simple_power(int x, int n);

bool is_simple_power(int x, int intN) {
    double y = pow((double)n, log((double)x) / log((double)n));
    return (y == x);
}

int originalMain() {
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