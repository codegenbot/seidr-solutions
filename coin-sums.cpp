```cpp
#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    int pennies = cents % 5;
    cents /= 5;

    int nickles = cents;
    while (nickles >= 20) {
        nickles -= 20; pennies += 5;
    }

    int dimes = nickles;
    while (dimes >= 10) {
        dimes -= 10; pennies += 50;
    }

    int quarters = dimes / 25;
    pennies += quarters * 100;

    std::cout << "Quarters: " << quarters << std::endl;
    std::cout << "Dimes: " << dimes % 25 << std::endl;
    std::cout << "Nickles: " << nickles << std::endl;
    std::cout << "Pennies: " << pennies << std::endl;

    return 0;
}