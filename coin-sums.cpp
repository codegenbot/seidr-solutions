```cpp
#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    int quarters = cents / 25;
    int remaining = cents % 25;

    int dimes = remaining / 10;
    int nickles = remaining % 10;

    int pennies = nickles * 5 + remaining % 5;

    std::cout << "Quarters: " << quarters << "\n";
    std::cout << "Dimes: " << dimes << "\n";
    std::cout << "Nickels: " << nickles << "\n";
    std::cout << "Pennies: " << pennies << "\n";

    return 0;
}