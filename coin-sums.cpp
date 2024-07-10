#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    // Calculate Quarters
    int quarters = 0;
    while (cents >= 25) {
        cents -= 25;
        quarters++;
    }

    // Calculate Dimes
    int dimes = 0;
    while (cents >= 10) {
        cents -= 10;
        dimes++;
    }

    // Calculate Nickles
    int nickles = 0;
    while (cents >= 5) {
        cents -= 5;
        nickles++;
    }

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