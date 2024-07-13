#include <iostream>

int main() {
    int quarters = 0;
    int dimes = 0;
    int nickles = 0;
    int pennies = 0;

    std::cout << "Enter the number of cents: ";
    std::string input;
    std::getline(std::cin, input);
    int cents = std::stoi(input);

    int quarterCents = 0;
    while (cents >= 25) {
        quarters++;
        quarterCents += 25;
        cents -= 25;
    }

    dimes = cents / 10;
    cents %= 10;

    nickles = cents / 5;
    cents %= 5;

    pennies = cents; // this is the remaining amount in pennies

    std::cout << "Quarters: " << quarters << std::endl;
    std::cout << "Dimes: " << dimes << std::endl;
    std::cout << "Nickles: " << nickles << std::endl;
    std::cout << "Pennies: " << pennies << std::endl;

    return 0;
}