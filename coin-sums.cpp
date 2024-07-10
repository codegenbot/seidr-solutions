```cpp
#include <iostream>

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

    int totalCoins = quarters + dimes + nickles + pennies;

    if (totalCoins > 0) {
        std::cout << quarters << " quarter" << (quarters > 1 ? "s, " : ", ");
        if (dimes > 0) {
            std::cout << (dimes > 1 ? dimes + " dimes, " : "one dime, ");
        }
        if (nickles > 0) {
            std::cout << (nickles > 1 ? nickles + " nickels, " : "one nickel, ");
        }
        if (pennies > 0) {
            std::cout << pennies << " penny" << (pennies > 1 ? "s" : "");
        }
        std::cout << std::endl;
    } else {
        std::cout << "You don't need any coins." << std::endl;
    }

    return 0;
}