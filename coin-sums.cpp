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
        if (quarters > 0) {
            std::cout << quarters << " quarter" << (quarters > 1 ? "s, " : ", ");
        }
        if (dimes > 0) {
            std::cout << dimes << " dime" << (dimes > 1 ? "s, " : ", ");
        }
        if (nickles > 0) {
            std::cout << nickles << " nickel" << (nickles > 1 ? "s, " : ", ");
        }
        if (pennies > 0) {
            std::cout << pennies << " penny";
        }
        std::cout << std::endl;
    } else {
        std::cout << "You don't need any coins." << std::endl;
    }

    return 0;
}