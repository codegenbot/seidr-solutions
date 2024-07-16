#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    int quarters = 0;
    while (cents >= 25) {
        ++quarters;
        cents -= 25;
    }
    std::cout << "Quarters: " << quarters << "\n";

    int nickles = 0;
    while (cents >= 5) {
        ++nickles;
        cents -= 5;
    }
    std::cout << "Nickels: " << nickles << "\n";

    int pennies = 0;
    while (cents > 0) {
        ++pennies;
        --cents;
    }
    std::cout << "Pennies: " << pennies << "\n";

    return 0;
}