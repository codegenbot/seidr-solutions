#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;

    while (cents > 25) {
        cents -= 25;
        quarters++;
    }

    while (cents > 10) {
        cents -= 10;
        dimes++;
    }

    while (cents > 5) {
        cents -= 5;
        nickels++;
    }

    pennies = cents;

    std::cout << quarters << std::endl;
    std::cout << dimes << std::endl;
    std::cout << nickels << std::endl;
    std::cout << pennies << std::endl;

    return 0;
}