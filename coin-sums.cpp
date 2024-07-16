#include <iostream>
#include <string>
#include <sstream>

int main() {
    int cents;
    std::cin >> cents;

    int quarters = cents / 25;
    int remainingCents = cents % 25;

    while(remainingCents >= 10) {
        int dimes = remainingCents / 10;
        remainingCents %= 10;
    }

    int nickels = remainingCents / 5;
    int pennies = remainingCents % 5;

    std::cout << "Quarters: " << std::to_string(quarters) << "\n";
    std::cout << "Dimes: " << std::to_string(dimes) << "\n";
    std::cout << "Nickels: " << std::to_string(nickles) << "\n";
    std::cout << "Pennies: " << std::to_string(pennies) << "\n";

    return 0;
}