#include <iostream>
#include <string>

int main() {
    int cents;
    std::cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = 0;
    while (cents >= 10) {
        dimes++;
        cents -= 10;
    }

    int nickles = 0;
    while (cents >= 5) {
        nickles++;
        cents -= 5;
    }

    int pennies = cents;

    std::cout << quarters << " quarter" << (quarters > 1 ? "s" : "") << std::endl;
    std::cout << dimes << " dime" << (dimes > 1 ? "s" : "") << std::endl;
    std::cout << nickles << " nickel" << (nickles > 1 ? "s" : "") << std::endl;
    std::cout << pennies << " penny" << (pennies > 1 ? "s" : "") << std::endl;

    return 0;
}