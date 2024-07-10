```cpp
#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    int quarters = cents / 25; 
    cents %= 25;

    int dimes = cents / 10;
    cents %= 10;

    int nickles = cents / 5;
    cents %= 5;

    int pennies = cents;

    if (quarters > 0) {
        std::cout << quarters;
        if (quarters > 1) {
            std::cout << "s";
        }
        std::cout << " coin" << (quarters > 1 ? "s" : "") << " of kind quarter, ";
    }

    if (dimes > 0) {
        std::cout << dimes;
        if (dimes > 1) {
            std::cout << "s";
        }
        std::cout << " coin" << (dimes > 1 ? "s" : "") << " of kind dime, ";
    }

    if (nickles > 0) {
        std::cout << nickles;
        if (nickles > 1) {
            std::cout << "s";
        }
        std::cout << " coin" << (nickles > 1 ? "s" : "") << " of kind nickel, ";
    }

    if (pennies > 0) {
        std::cout << pennies;
        if (pennies > 1) {
            std::cout << "s";
        }
        std::cout << " coin" << (pennies > 1 ? "s" : "") << " of kind penny";
    }

    std::cout << std::endl;

    return 0;
}