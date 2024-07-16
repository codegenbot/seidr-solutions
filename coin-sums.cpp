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

    std::cout << quarters << " quarter" << (quarters > 1 ? "s" : "") << std::endl;
    if (dimes > 0) {
        std::cout << dimes << " dime" << (dimes > 1 ? "s" : "") << std::endl;
    }
    if (nickles > 0) {
        std::cout << nickles << " nickel" << (nickles > 1 ? "s" : "") << std::endl;
    }
    if (pennies > 0) {
        std::cout << pennies << " penny" << (pennies > 1 ? "s" : "") << std::endl;
    }

    return 0;
}