#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    int pennies = cents / 1;
    int nickles = (cents % 100) / 25;
    int dimes = ((cents % 100) % 25) / 10;
    int quarters = (((cents % 100) % 25) % 10) / 5;

    std::cout << pennies << "\n";
    std::cout << nickles << "\n";
    std::cout << dimes << "\n";
    std::cout << quarters << "\n";

    return 0;
}