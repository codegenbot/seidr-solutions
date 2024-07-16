```cpp
#include <iostream>
#include <string>

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

    std::cout << (quarters > 0 ? std::to_string(quarters) + " quarter" + (quarters > 1 ? "s" : "") : "") << std::endl;
    if (dimes > 0) {
        std::cout << (dimes > 0 ? std::to_string(dimes) + " dime" + (dimes > 1 ? "s" : "") : "") << std::endl;
    }
    if (nickles > 0) {
        std::cout << (nickles > 0 ? std::to_string(nickles) + " nickel" + (nickles > 1 ? "s" : "") : "") << std::endl;
    }
    std::cout << (pennies > 0 ? std::to_string(pennies) + " penny" + (pennies > 1 ? "s" : "") : "") << std::endl;

    return 0;
}