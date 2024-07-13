#include <iostream>
#include <string>

int main() {
    int cents;
    std::cout << "Enter the number of cents: ";
    std::cin >> cents;

    int nickles = (cents / 25); // quarters
    int pennies = cents % 25; // remaining cents

    int dimes = pennies / 10; // calculate dimes
    pennies %= 10;

    int nicklesNeeded = pennies / 5; // calculate nickles needed
    pennies %= 5;

    std::cout << "Quarters: " << (nickles > 0 ? std::to_string(nickles) : "0") << "\n";
    std::cout << "Dimes: " << (dimes > 0 ? std::to_string(dimes) : "0") << "\n";
    std::cout << "Nickels: " << (nicklesNeeded > 0 ? std::to_string(nicklesNeeded) : "0") << "\n";
    std::cout << "Pennies: " << (pennies > 0 ? std::to_string(pennies) : "0") << "\n";

    return 0;
}