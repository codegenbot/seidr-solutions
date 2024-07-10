```c++
#include <iostream>
#include <string>

int main() {
    int cents;
    std::cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = 0;
    while (cents >= 10) {
        dimes++;
        cents -= 10;
    }

    int nickles = 0;
    while (cents >= 5) {
        nickles++;
        cents -= 5;
    }

    int pennies = cents;

    std::cout << std::to_string(quarters) << std::endl;
    std::cout << std::to_string(dimes) << std::endl;
    std::cout << std::to_string(nickles) << std::endl;
    std::cout << std::to_string(pennies) << std::endl;

    return 0;
}