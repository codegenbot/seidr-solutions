```cpp
#include <iostream>
#include <string>

int main() {
    int pennies = 0;
    int nickles = 0;
    int dimes = 0;
    int quarters = 0;

    std::cout << "Enter the number of cents: ";
    int cents;
    std::cin >> cents;

    quarters = cents / 25;
    cents %= 25;

    dimes = cents / 10;
    cents %= 10;

    nickles = cents / 5;
    cents %= 5;

    pennies = cents;

    std::cout << "Quarters: " << std::to_string(quarters) << std::endl;
    std::cout << "Dimes: " << std::to_string(dimes) << std::endl;
    std::cout << "Nickles: " << std::to_string(nickles) << std::endl;
    std::cout << "Pennies: " << std::to_string(pennies) << std::endl;

    return 0;
}