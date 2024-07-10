#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    int pennies = cents / 1;
    cents %= 1;
    int nickles = cents / 5;
    cents %= 5;
    int dimes = cents / 10;
    cents %= 10;
    int quarters = cents / 25;

    if (quarters > 0) {
        std::cout << quarters << " coin" << (quarters > 1 ? "s" : "") << " of kind quarter, ";
    }

    if (dimes > 0) {
        std::cout << dimes << " coin" << (dimes > 1 ? "s" : "") << " of kind dime, ";
    }

    if (nickles > 0) {
        std::cout << nickles << " coin" << (nickles > 1 ? "s" : "") << " of kind nickel, ";
    }

    if (pennies > 0) {
        std::cout << pennies << " coin" << (pennies > 1 ? "s" : "") << " of kind penny";
    }

    if ((quarters + dimes + nickles + pennies) == 0) {
        std::cout << "You don't need any coins.";
    } else {
        std::cout << std::endl;
    }

    return 0;
}