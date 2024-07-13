#include <iostream>

int main() {
    int cents;
    std::cin >> cents;
    
    int quarters = cents / 25;
    cents %= 25;
    int dimes = cents / 10;
    cents %= 10;
    int nickels = cents / 5;
    cents %= 5;
    int pennies = cents;
    
    std::cout << pennies << "\n";
    std::cout << nickels << "\n";
    std::cout << dimes << "\n";
    std::cout << quarters << "\n";
    
    return 0;
}