```cpp
#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    int quarters = 0;
    while (cents >= 25) {
        cents -= 25;
        quarters++;
    }

    int nickles = 0;
    while (cents >= 5) {
        cents -= 5;
        nickles++;
    }

    int dimes = (cents + 4) / 10; 
    while (dimes * 10 <= cents) {
        cents -= dimes * 10;
        dimes--;
    }

    int pennies = cents;

    std::cout << quarters << endl;
    std::cout << nickles << endl;
    std::cout << dimes << endl;
    std::cout << pennies << std::endl;

    return 0;
}