#include <iostream>
int main() {
    int cents;
    std::cin >> cents;

    int quarters = cents / 25;
    cents %= 25;
    int dimes = cents / 10;
    cents %= 10;
    int nickels = cents / 5;
    int pennies = cents % 5;

    std::cout << pennies << std::endl << nickels << std::endl << dimes << std::endl << quarters << std::endl;

    return 0;
}