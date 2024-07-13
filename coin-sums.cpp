```c++
#include <iostream>
#include <string>

int main() {
    int cents;
    std::cout << "Enter the number of cents: ";
    std::cin >> cents;

    int nickles = (cents / 25); 
    int pennies = cents % 25; 

    int dimes = pennies / 10; 
    pennies %= 10;

    int nicklesNeeded = pennies / 5; 
    pennies %= 5;

    std::cout << "Quarters: " << std::to_string(nickles) << "\n";
    std::cout << "Dimes: " << std::to_string(dimes) << "\n";
    std::cout << "Nickels: " << std::to_string(nicklesNeeded) << "\n";
    std::cout << "Pennies: " << std::to_string(pennies) << "\n";

    return 0;
}