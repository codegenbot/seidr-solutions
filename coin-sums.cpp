#include <iostream>

int main() {
    int cents;
    std::cin >> cents;
    
    int pennies = cents;
    int nickels = pennies / 5;
    pennies %= 5;
    int dimes = pennies / 10;
    pennies %= 10;
    int quarters = pennies / 25;
    pennies %= 25;
    
    std::cout << quarters << std::endl;
    std::cout << dimes << std::endl;
    std::cout << nickels << std::endl;
    std::cout << pennies << std::endl;
    
    return 0;
}