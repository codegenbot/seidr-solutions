#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    // Calculate Quarters
    int quarters = cents / 25;
    cents %= 25;

    // Calculate Dimes
    int dimes = cents / 10;
    cents %= 10;

    // Calculate Nickles
    int nickles = cents / 5;
    cents %= 5;

    // Calculate Pennies
    int pennies = cents;

    std::cout << quarters << " quarter" << (quarters > 1 ? "s" : "") << std::endl;
    if (dimes > 0) {
        if (dimes > 1) {
            std::cout << dimes << " dime" << (dimes > 1 ? "s" : "") << std::endl;
        } else {
            std::cout << dimes << " dime" << std::endl;
        }
    }
    if (nickles > 0) {
        if (nickles > 1) {
            std::cout << nickles << " nickel" << (nickles > 1 ? "s" : "") << std::endl;
        } else {
            std::cout << nickles << " nickel" << std::endl;
        }
    }
    if (pennies > 0) {
        if (pennies > 1) {
            std::cout << pennies << " penny" << (pennies > 1 ? "s" : "") << std::endl;
        } else {
            std::cout << pennies << " penny" << std::endl;
        }
    }

    return 0;
}