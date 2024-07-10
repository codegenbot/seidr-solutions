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
        std::cout << (quarters > 1 ? std::to_string(quarters) + "s" : std::to_string(quarters)) << " coin" << (quarters > 1 ? "s" : "") << " of kind quarter, ";
    }

    if (dimes > 0) {
        std::cout << (dimes > 1 ? std::to_string(dimes) + "s" : std::to_string(dimes)) << " coin" << (dimes > 1 ? "s" : "") << " of kind dime, ";
    }

    if (nickles > 0) {
        std::cout << (nickles > 1 ? std::to_string(nickles) + "s" : std::to_string(nickles)) << " coin" << (nickles > 1 ? "s" : "") << " of kind nickel, ";
    }

    if (pennies > 0) {
        std::cout << (pennies > 1 ? std::to_string(pennies) + "s" : std::to_string(pennies)) << " coin" << (pennies > 1 ? "s" : "") << " of kind penny";
    }

    if (quarters == 0 && dimes == 0 && nickles == 0 && pennies == 0) {
        std::cout << "No coins needed.";
    } else {
        std::cout << std::endl;
    }

    return 0;
}