#include <iostream>

int main() {
    int cents;
    int quarters = 0;
    int dimes = 0;
    int nickles = 0;
    int pennies = 0;

    std::cin >> cents;

    while (cents >= 25) {
        quarters++;
        cents -= 25;
    }

    dimes = cents / 10; 
    cents %= 10;

    pennies = cents;
    nickles = cents / 5; 
    cents %= 5;

    std::cout << quarters << "\n";
    std::cout << nickles << "\n";
    std::cout << dimes << "\n";
    std::cout << pennies << "\n";

    return 0;
}