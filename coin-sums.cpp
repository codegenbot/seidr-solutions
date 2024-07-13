#include <iostream>

int main() {
    int cents;
    std::cout << "Enter the number of cents: ";
    std::cin >> cents;

    int pennies = 0;
    int nickels = 0;
    int dimes = 0;
    int quarters = 0;

    while (cents >= 25) {
        cents -= 25;
        quarters++;
    }

    while (cents >= 10) {
        cents -= 10;
        dimes++;
    }

    while (cents >= 5) {
        cents -= 5;
        nickels++;
    }

    pennies = cents;

    std::cout << "Quarters: " << quarters << std::endl;
    std::cout << "Dimes: " << dimes << std::endl;
    std::cout << "Nickels: " << nickels << std::endl;
    std::cout << "Pennies: " << pennies << std::endl;

    return 0;
}