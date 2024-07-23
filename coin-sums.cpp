#include <iostream>

int main() {
    int cents, quarters = 0, dimes = 0, nickles = 0, pennies = 0;
    
    std::cin >> cents;

    quarters = cents / 25;
    cents %= 25;
    dimes = cents / 10;
    cents %= 10;
    nickles = cents / 5;
    pennies = cents % 5;

    std::cout << "Quarters: " << quarters << endl;
    std::cout << "Dimes: " << dimes << endl;
    std::cout << "Nickles: " << nickles << endl;
    std::cout << "Pennies: " << pennies << endl;

    return 0;
}