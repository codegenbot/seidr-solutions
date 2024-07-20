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

    std::cout << quarters << std::endl;
    std::cout << dimes + (quarters * 2) << std::endl; 
    std::cout << nickels + (dimes * 2) << std::endl;   
    std::cout << pennies + (nickels * 5 + dimes * 10 + quarters * 25) << std::endl;

    return 0;
}