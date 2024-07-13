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

    pennies = cents;
    quarters = pennies / 25;  
    pennies %= 25;

    nickles = pennies / 5;
    pennies %= 5;

    dimes = pennies / 10;
    pennies %= 10;

    std::cout << "Quarters: " << quarters << std::endl;
    std::cout << "Dimes: " << dimes << std::endl;
    std::cout << "Nickles: " << nickles << std::endl;
    std::cout << "Pennies: " << pennies << std::endl;

    return 0;
}