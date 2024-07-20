```cpp
#include <iostream>
#include <string>

int main() {
    int cents;
    std::cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = cents / 10;
    cents %= 10;

    int nickels = cents / 5;
    cents %= 5;

    int pennies = cents;

    std::string output = std::to_string(quarters) + " quarter(s), " +
                        std::to_string(dimes) + " dime(s), " +
                        std::to_string(nickels) + " nickel(s), and " +
                        std::to_string(pennies) + " penny(ies).";

    std::cout << output << std::endl;

    return 0;
}