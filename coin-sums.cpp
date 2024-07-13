#include <iostream>
#include <string>

int main() {
    int pennies = 0;
    int nickles = 0;
    int dimes = 0;
    int quarters = 0;

    std::cout << "Enter the number of cents: ";
    std::string input;
    std::getline(std::cin, input);
    int cents = std::stoi(input);

    quarters = cents / 25;
    cents %= 25;

    nickles = cents / 5;
    cents %= 5;

    dimes = cents / 10;
    cents %= 10;

    pennies = cents; // this is the remaining amount in pennies

    std::cout << "Quarters: " << quarters << std::endl;
    std::cout << "Dimes: " << dimes << std::endl;
    std::cout << "Nickles: " << nickles << std::endl;
    std::cout << "Pennies: " << pennies << std::endl;

    return 0;
}