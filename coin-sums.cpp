#include <iostream>

int main() {
    int cents;
    int pennies = 0;
    int nickles = 0;
    int dimes = 0;
    int quarters = 0;

    std::cin >> cents;

    while (cents >= 25) {
        quarters++;
        cents -= 25;
    }

    int remaining = cents; 

    while (remaining >= 10) {
        dimes++;
        remaining -= 10;
    }

    while (remaining >= 25) {
        quarters++;
        remaining -= 25;
    }
    nickles = remaining / 5; // calculate nickels
    pennies = remaining % 5; // calculate pennies

    std::cout << quarters << "\n";
    std::cout << nickles << "\n";
    std::cout << dimes << "\n";
    std::cout << pennies << "\n";

    return 0;
}