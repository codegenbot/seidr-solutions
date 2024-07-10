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

    std::cout << (quarters > 0 ? quarters + " quarter" + (quarters > 1 ? "s" : "") : "") << std::endl;
    if (dimes > 0) {
        std::cout << (dimes > 0 ? dimes + " dime" + (dimes > 1 ? "s" : "") : "") << std::endl;
    }
    if (nickles > 0) {
        std::cout << (nickles > 0 ? nickles + " nickel" + (nickles > 1 ? "s" : "") : "") << std::endl;
    }
    if (pennies > 0) {
        std::cout << (pennies > 0 ? pennies + " penny" + (pennies > 1 ? "s" : "") : "") << std::endl;
    }

    return 0;
}