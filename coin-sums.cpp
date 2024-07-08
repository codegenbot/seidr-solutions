#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = (cents - (quarters * 25)) / 10; 
    int pennies = (cents - (dimes * 10) - (quarters * 25)) / 5; 
    cents %= 5;

    std::cout << quarters << "\n";
    std::cout << pennies << "\n";
    std::cout << dimes << "\n";
    std::cout << (cents) << "\n";

    return 0;
}