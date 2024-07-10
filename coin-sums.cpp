#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    while (cents > 0) {
        int quarters = cents / 25;
        cents -= quarters * 25;

        if (quarters > 0) {
            std::cout << quarters << " quarter" << (quarters > 1 ? "s" : "") << std::endl;
        }

        int dimes = cents / 10;
        cents %= 10;

        if (dimes > 0) {
            std::cout << dimes << " dime" << (dimes > 1 ? "s" : "") << std::endl;
        }

        int nickles = cents / 5;
        cents %= 5;

        if (nickles > 0) {
            std::cout << nickles << " nickel" << (nickles > 1 ? "s" : "") << std::endl;
        }

        int pennies = cents;
        if (pennies > 0) {
            std::cout << pennies << " penny" << (pennies > 1 ? "s" : "") << std::endl;
        }
    }

    return 0;
}