#include <iostream>
#include <string>

int main() {
    int cents;
    std::cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = cents / 10;
    cents %= 10;

    int nickles = cents / 5;
    cents %= 5;

    int pennies = cents;

    std::cout << quarters << (quarters > 1 ? " quarter" + std::to_string(quarters) + "s" : " quarter") << std::endl;
    if (dimes > 0) {
        std::cout << dimes << (dimes > 1 ? " dime" + std::to_string(dimes) + "s" : " dime") << std::endl;
    }
    if (nickles > 0) {
        std::cout << nickles << (nickles > 1 ? " nickel" + std::to_string(nickles) + "s" : " nickel") << std::endl;
    }
    if (pennies > 0) {
        std::cout << pennies << (pennies > 1 ? " penny" + std::to_string(pennies) + "s" : " penny") << std::endl;
    }

    return 0;
}