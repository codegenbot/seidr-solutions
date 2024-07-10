```c++
#include <iostream>

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

    std::cout << quarters << " quarters" << std::endl;
    std::cout << dimes << " dimes" << std::endl;
    std::cout << nickles << " nickles" << std::endl;
    std::cout << pennies << " pennies" << std::endl;

    return 0;
}