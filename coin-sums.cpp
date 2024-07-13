```c++
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

    std::cout << "Quarters: " << std::to_string(nickles) << "\n";
    std::cout << "Dimes: " << std::to_string(dimes) << "\n";
    std::cout << "Nickels: " << std::to_string(nicklesNeeded) << "\n";
    std::cout << "Pennies: " << std::to_string(pennies) << "\n";

    return 0;
}