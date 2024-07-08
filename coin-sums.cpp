#include <iostream>

int main() {
    int cents;
    int pennies = 0;
    int nickles = 0;
    int dimes = 0;
    int quarters = 0;

    std::cin >> cents;

    quarters = cents / 25; 
    cents %= 25;

    while (cents >= 10) {
        dimes++;
        cents -= 10;
    }

    nickles = cents / 5; 
    cents %= 5;

    pennies = cents;

    std::cout << quarters << "\n";
    std::cout << nickles << "\n";
    std::cout << dimes << "\n";
    std::cout << pennies << "\n";

    return 0;
}