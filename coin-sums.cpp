#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    int quarters = 0, dimes = 0, nickles = 0, pennies = 0;

    while (cents >= 25) {
        quarters++;
        cents -= 25;
    }
    while (cents >= 10) {
        dimes++;
        cents -= 10;
    }
    while (cents >= 5) {
        nickles++;
        cents -= 5;
    }
    pennies = cents;

    std::cout << quarters << std::endl;
    std::cout << dimes << std::endl;
    std::cout << nickles << std::endl;
    std::cout << pennies << std::endl;

    return 0;
}