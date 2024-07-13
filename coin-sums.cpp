```c++
#include <iostream>

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

    std::cout << "Quarters: " << nickles << "\n";
    std::cout << "Dimes: " << dimes << "\n";
    std::cout << "Nickels: " << nicklesNeeded << "\n";
    std::cout << "Pennies: " << pennies << "\n";

    return 0;
}