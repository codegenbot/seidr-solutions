```cpp
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

    if (quarters > 0) {
        std::cout << quarters << " coin" << (quarters > 1 ? "s" : "") << " of kind quarter";
        if (dimes + nickles + pennies > 0) {
            std::cout << ", ";
        }
    }

    if (dimes > 0) {
        std::cout << std::to_string(dimes) << " coin" << (dimes > 1 ? "s" : "") << " of kind dime";
        if (nickles + pennies > 0) {
            std::cout << ", ";
        }
    }

    if (nickles > 0) {
        std::cout << std::to_string(nickles) << " coin" << (nickles > 1 ? "s" : "") << " of kind nickel";
        if (pennies > 0) {
            std::cout << ", ";
        }
    }

    if (pennies > 0) {
        std::cout << std::to_string(pennies) << " penny" << (pennies > 1 ? "s" : "");
    }

    if ((quarters + dimes + nickles + pennies) == 0) {
        std::cout << "You don't need any coins.";
    } else {
        std::cout << std::endl;
    }

    return 0;
}