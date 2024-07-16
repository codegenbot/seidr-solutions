```c++
#include <iostream>
#include <string>
#include <sstream>

int main() {
    int cents;
    std::cin >> cents;

    int quarters = cents / 25;
    int remaining = cents % 25;

    int dimes = remaining / 10;
    remaining %= 10;
    int nickles = remaining / 5;
    remaining %= 5;
    int pennies = remaining;

    std::cout << "Quarters: " << std::to_string(quarters) << "\n";
    std::cout << "Dimes: " << std::to_string(dimes) << "\n";
    std::cout << "Nickels: " << std::to_string(nickles) << "\n";
    std::cout << "Pennies: " << std::to_string(pennies) << "\n";

    return 0;
}