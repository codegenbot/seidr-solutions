#include <iostream>
#include <string>

int main() {
    int cents;
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;

    std::cin >> cents;

    quarters = cents / 25;
    cents %= 25;
    dimes = cents / 10;
    cents %= 10;
    nickels = cents / 5;
    cents %= 5;
    pennies = cents;

    std::cout << quarters << std::endl;
    std::cout << dimes << std::endl;
    std::cout << nickels << std::endl;
    std::cout << pennies << std::endl;

    return 0;
}