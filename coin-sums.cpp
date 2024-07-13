#include <iostream>

int main() {
    int cents;
    std::cout << "Enter the number of cents: ";
    std::cin >> cents;

    int quarters = cents / 25;
    cents %= 25; 
    quarters = (quarters + (cents >= 25)) ? quarters + 1 : quarters;
    cents -= 25 * ((cents >= 25) ? 1 : 0);

    int dimes = cents / 10;
    cents %= 10; 
    dimes = (dimes + (cents >= 10)) ? dimes + 1 : dimes;
    cents -= 10 * ((cents >= 10) ? 1 : 0);

    int nickles = cents / 5;
    cents %= 5; 
    nickles = (nickles + (cents >= 5)) ? nickles + 1 : nickles;
    cents -= 5 * ((cents >= 5) ? 1 : 0);

    int pennies = cents;

    std::cout << "Quarters: " << quarters << std::endl;
    std::cout << "Dimes: " << dimes << std::endl;
    std::cout << "Nickles: " << nickles << std::endl;
    std::cout << "Pennies: " << pennies << std::endl;

    return 0;
}