#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    int quarters = 0;
    while (cents >= 25) {
        cents -= 25;
        quarters++;
    }
    int dimes = 0;
    while (cents >= 10) {
        cents -= 10;
        dimes++;
    }
    int nickles = 0;
    while (cents >= 5) {
        cents -= 5;
        nickles++;
    }
    int pennies = cents;

    std::cout << quarters << " coin" << (quarters > 1 ? "s" : "") << " of kind quarter, ";
    if (dimes > 0 || cents >= 10) {
        std::cout << dimes << " coin" << (dimes > 1 ? "s" : "") << " of kind dime, ";
    }
    if (nickles > 0 || cents >= 5) {
        std::cout << nickles << " coin" << (nickles > 1 ? "s" : "") << " of kind nickel, ";
    }
    std::cout << pennies << " coin" << (pennies > 1 ? "s" : "") << " of kind penny";
    if (quarters + dimes + nickles + pennies == 0) {
        std::cout << "You don't need any coins.";
    } else {
        std::cout << std::endl;
    }

    return 0;
}