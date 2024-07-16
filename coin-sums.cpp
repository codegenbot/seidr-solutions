#include <iostream>
#include <string>
#include <sstream>

int main() {
    int cents;
    std::cin >> cents;

    int quarters = cents / 25;
    int quartersRemain = cents % 25; 

    int dimes = quartersRemain / 10;
    int nickles = (quartersRemain % 10) / 5; 
    int pennies = (quartersRemain % 10) % 5;

    std::cout << "Quarters: " << std::to_string(quarters) << "\n";
    std::cout << "Dimes: " << std::to_string(dimes) << "\n";
    std::cout << "Nickels: " << std::to_string(nickles) << "\n";
    std::cout << "Pennies: " << std::to_string(pennies) << "\n";

    return 0;
}