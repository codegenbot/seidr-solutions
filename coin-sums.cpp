```cpp
#include <iostream>
#include <string>

int main() {
    int cents;
    std::cin >> cents;

    int dimes = 0;
    int nickels = 0;
    int pennies = 0;

    int quarters = cents / 25;
    cents %= 25;

    while (cents >= 10) {
        dimes++;
        cents -= 10;
    }

    while (cents >= 5) {
        nickels++;
        cents -= 5;
    }

    pennies = cents; // store the remaining cents as pennies

    std::cout << std::to_string(quarters) << std::endl;
    std::cout << std::to_string(dimes) << std::endl;
    std::cout << std::to_string(nickels) << std::endl;
    std::cout << std::to_string(pennies) << std::endl;

    return 0;
}