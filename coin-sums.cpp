#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    int pennies = 0;
    int quarters = cents / 25;
    cents %= 25;

    int dimes = (cents - (quarters * 25)) / 10; 
    cents %= 10;

    int nickles = (cents - (dimes * 10)) / 5; 
    cents %= 5;

    std::cout << quarters << "\n";
    std::cout << nickles << "\n";
    std::cout << dimes << "\n";
    std::cout << cents << "\n";

    return 0;
}