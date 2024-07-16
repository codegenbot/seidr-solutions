```cpp
#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = 0;
    int nickles = 0;
    int pennies = 0;

    while (cents >= 10) {
        dimes = cents / 10;
        cents -= dimes * 10;
    }

    while (cents >= 5) {
        nickles = cents / 5;
        cents -= nickles * 5;
    }

    pennies = cents;

    std::cout << quarters << " " << (quarters > 1 ? "quarters" : "quarter") << std::endl;
    if (dimes > 0) {
        std::cout << dimes << " " << (dimes > 1 ? "dimes" : "dime");
        if (dimes > 1) {
            std::cout << "s";
        }
        std::cout << std::endl;
    }
    if (nickles > 0) {
        std::cout << nickles << " " << (nickles > 1 ? "nickels" : "nickel");
        if (nickles > 1) {
            std::cout << "s";
        }
        std::cout << std::endl;
    }
    std::cout << pennies << " " << (pennies > 1 ? "pennies" : "penny") << std::endl;

    return 0;
}