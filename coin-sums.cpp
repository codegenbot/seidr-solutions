#include <iostream>

int main() {
    int cents;
    int quarters = 0;
    int nickles = 0;
    int dimes = 0;
    int pennies = 0;

    std::cin >> cents;

    while (cents > 0) {
        if (cents >= 25) {
            quarters++;
            cents -= 25;
        } else if (cents >= 10) {
            dimes++;
            cents -= 10;
        } else if (cents >= 5) {
            nickles++;
            cents -= 5;
        } else {
            pennies += cents / 1;
            cents %= 1;
        }
    }

    std::cout << quarters << "\n";
    std::cout << nickles << "\n";
    std::cout << dimes << "\n";
    std::cout << pennies << "\n";

    return 0;
}