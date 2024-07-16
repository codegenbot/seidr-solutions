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

    const std::string coin_names[] = {"penny", "nickel", "dime", "quarter"};
    std::cout << quarters << " " << (quarters > 1 ? coin_names[3] + (quarters > 1 ? "s" : "") : coin_names[3]) << std::endl;
    if (dimes > 0) {
        std::cout << dimes << " " << (dimes > 1 ? coin_names[2] + (dimes > 1 ? "s" : "") : coin_names[2]);
        std::cout << std::endl;
    }
    if (nickles > 0) {
        std::cout << nickles << " " << (nickles > 1 ? coin_names[1] + (nickles > 1 ? "s" : "") : coin_names[1]);
        std::cout << std::endl;
    }
    std::cout << pennies << " " << (pennies > 1 ? coin_names[0] + (pennies > 1 ? "s" : "") : coin_names[0]) << std::endl;

    return 0;
}