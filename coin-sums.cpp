#include <iostream>

int main() {
    int cents;
    std::cout << "Enter the amount in cents: ";
    std::cin >> cents;
    
    // Calculate coins
    int quarters = cents / 25;
    cents %= 25;
    int dimes = cents / 10;
    cents %= 10;
    int nickles = cents / 5;
    cents %= 5;
    int pennies = cents;
    
    // Print the result
    std::cout << "Quarters: " << quarters << "\n";
    std::cout << "Dimes: " << dimes << "\n";
    std::cout << "Nickles: " << nickles << "\n";
    std::cout << "Pennies: " << pennies << "\n";
    
    return 0;
}