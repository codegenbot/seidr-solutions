#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    int pennies = cents / 1;
    int nickels = (cents % 100) / 25;
    int dimes = ((cents % 100) % 25) / 10;
    int quarters = (((cents % 100) % 25) % 10) / 5;

    std::cout << pennies << "\n";
    std::cout << nickels << "\n";
    std::cout << dimes << "\n";
    std::cout << quarters << "\n";

    return 0;
}