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

    while (cents >= 25) {
        quarters++;
        cents -= 25;
    }

    int dimeCents = 0;
    while (cents >= 10) {
        dimes++;
        cents -= 10;
        dimeCents += 10;
    }

    int nickelCents = 0;
    while (cents >= 5) {
        nickles++;
        cents -= 5;
        nickelCents += 5;
    }

    pennies = cents; // update remaining pennies

    std::cout << "Quarters: " << quarters << std::endl;
    std::cout << "Dimes: " << dimes << std::endl;
    std::cout << "Nickles: " << nickles << std::endl;
    std::cout << "Pennies: " << pennies << std::endl;

    while (dimeCents > 0 && dimeCents + 5 <= cents) {
        nickelCents += 5;
        dimeCents -= 5;
    }
    pennies = cents; // update remaining pennies

    std::cout << "Quarters: " << quarters << std::endl;
    std::cout << "Dimes: " << dimes << std::endl;
    std::cout << "Nickles: " << nickles << std::endl;
    std::cout << "Pennies: " << pennies << std::endl;

    return 0;
}