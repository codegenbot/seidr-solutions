```c++
#include <iostream>

int main() {
    int cents;
    std::cout << "Enter the number of cents: ";
    if (!(std::cin >> cents)) {
        std::cerr << "Invalid input. Please enter a valid number.\n";
        return 1; // exit with error code
    }

    int nickles = (cents / 25); 
    int pennies = cents % 25; 

    int dimes = pennies / 10; 
    pennies %= 10;

    int nicklesNeeded = pennies / 5; 
    pennies %= 5;

    std::cout << "Quarters: " << nickles << "\n";
    std::cout << "Dimes: " << dimes << "\n";
    std::cout << "Nickels: " << nicklesNeeded << "\n";
    std::cout << "Pennies: " << pennies << "\n";

    return 0;
}