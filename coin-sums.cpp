#include <iostream>
#include <ostream>

int main() {
    int cents;
    std::cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int remainingQuarters = quarters;
    int dimes = (remainingQuarters * 4 + cents) / 10;
    cents %= 10;

    int remainingDimes = dimes;
    int nickles = (remainingDimes * 10 + cents) / 5;
    cents %= 5;

    int remainingNickels = nickles;
    int pennies = remainingNickels * 5 + cents;

    std::cout << "Quarters: " << quarters << std::endl;
    std::cout << "Dimes: " << dimes << std::endl;
    std::cout << "Nickels: " << nickles << std::endl;
    std::cout << "Pennies: " << pennies << std::endl;

    return 0;
}