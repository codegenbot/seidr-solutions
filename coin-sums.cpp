```
#include <iostream>

int main() {
    int cents;
    std::cout << "Enter the number of cents: ";
    std::cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = cents / 10;
    cents %= 10;

    int nickles = cents / 5;
    cents %= 5;

    int pennies = cents;

    std::cout << "Quarters: " << quarters << endl;
    std::cout << "Dimes: " << dimes << endl;
    std::cout << "Nickles: " << nickles << endl;
    std::cout << "Pennies: " << pennies << endl;

    return 0;
}