```cpp
#include <iostream>

int main() {
    int cents, quarters = 0, dimes = 0, nickles = 0, pennies = 0;
    
    std::cin >> cents;

    while (cents >= 25) {
        quarters++;
        cents -= 25;
    }

    while (cents >= 10) {
        dimes++;
        cents -= 10;
    }

    while (cents >= 5) {
        nickles++;
        cents -= 5;
    }

    pennies = cents;

    std::cout << "Quarters: " << quarters << endl;
    std::cout << "Dimes: " << dimes << endl;
    std::cout << "Nickles: " << nickles << endl;
    std::cout << "Pennies: " << pennies << endl;

    return 0;
}