```cpp
#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    int quarterCount = 0;
    while (cents >= 25) {
        cents -= 25;
        quarterCount++;
    }

    int dimeCount = 0;
    while (cents >= 10) {
        cents -= 10;
        dimeCount++;
    }

    int nickelCount = 0;
    while (cents >= 5) {
        cents -= 5;
        nickelCount++;
    }

    int pennyCount = cents;

    std::cout << quarterCount << " quarter" << (quarterCount > 1 ? "s" : "") << std::endl;
    if (dimeCount > 0) {
        if (dimeCount > 1) {
            std::cout << dimeCount << " dime" << (dimeCount > 1 ? "s" : "") << std::endl;
        } else {
            std::cout << dimeCount << " dime" << std::endl;
        }
    }
    if (nickelCount > 0) {
        if (nickelCount > 1) {
            std::cout << nickelCount << " nickel" << (nickelCount > 1 ? "s" : "") << std::endl;
        } else {
            std::cout << nickelCount << " nickel" << std::endl;
        }
    }
    if (pennyCount > 0) {
        if (pennyCount > 1) {
            std::cout << pennyCount << " penny" << (pennyCount > 1 ? "s" : "") << std::endl;
        } else {
            std::cout << pennyCount << " penny" << std::endl;
        }
    }

    return 0;
}