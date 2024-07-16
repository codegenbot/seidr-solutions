#include <iostream>
#include <string>
#include <sstream>

int main() {
    int cents;
    std::cin >> cents;

    int quarters = cents / 25;
    int dimeRemaning = cents % 25;

    int dimes = dimeRemaning / 10;
    int nickelRemaining = dimeRemaning % 10;

    int nickles = nickelRemaining / 5;
    int pennies = nickelRemaining % 5;

    std::cout << "Quarters: " << std::to_string(quarters) << "\n";
    std::cout << "Dimes: " << std::to_string(dimes) << "\n";
    std::cout << "Nickels: " << std::to_string(nickles) << "\n";
    std::cout << "Pennies: " << std::to_string(pennies) << "\n";

    return 0;
}