#include <iostream>

int main() {
    int cents;
    int quarters;
    int dimes;
    int nickles;
    int pennies;

    std::cin >> cents;

    quarters = 0;
    while (cents >= 25) {
        quarters++;
        cents -= 25;
    }
    pennies = cents;

    dimes = cents / 10; 
    cents %= 10;
    dimes += quarters * 25 / 10;

    nickles = cents / 5; 
    cents %= 5;
    nickles += dimes * 2;

    std::cout << quarters << "\n";
    std::cout << nickles << "\n";
    std::cout << dimes << "\n";
    std::cout << pennies << "\n";

    return 0;
}