#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    int pennies = cents;
    int nickels = pennies / 5;
    pennies %= 5;
    int dimes = nickels / 2;
    nickels %= 2;
    int quarters = dimes / 2;
    dimes %= 2;

    std::cout << quarters << std::endl;
    std::cout << dimes << std::endl;
    std::cout << nickels << std::endl;
    std::cout << pennies << std::endl;

    return 0;
}