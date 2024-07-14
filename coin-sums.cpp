#include <iostream>

int main() {
    int quarters = 0, dimes = 0, nickles = 0, pennies = 0;

    std::cout << "Enter the number of cents: ";
    int cents;
    std::cin >> cents;

    while (cents >= 25) {
        ++quarters; // update quarters count
        cents -= 25;
    }

    while (cents >= 10) {
        ++dimes; // update dimes count
        cents -= 10;
    }

    while (cents >= 5) {
        ++nickles; // update nickles count
        cents -= 5;
    }

    pennies = cents; // update pennies count

    std::cout << "Quarters: " << quarters << std::endl;
    std::cout << "Dimes: " << dimes << std::endl;
    std::cout << "Nickles: " << nickles << std::endl;
    std::cout << "Pennies: " << pennies << std::endl;

    return 0;
}