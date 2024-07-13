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

    if(nickles > 0) std::cout << "Quarters: " << std::to_string(nickles) << "\n";
    else std::cout << "Quarters: 0\n";

    if(dimes > 0) std::cout << "Dimes: " << std::to_string(dimes) << "\n";
    else std::cout << "Dimes: 0\n";

    if(nicklesNeeded > 0) std::cout << "Nickels: " << std::to_string(nicklesNeeded) << "\n";
    else std::cout << "Nickels: 0\n";

    if(pennies > 0) std::cout << "Pennies: " << std::to_string(pennies) << "\n";
    else std::cout << "Pennies: 0\n";

    return 0;
}