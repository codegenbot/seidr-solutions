#include <iostream>

int main() {
    int cents;
    int quarters;
    int dimes;
    int nickles;
    int pennies;

    std::cin >> cents;

    quarters = 0;
    while (cents >= 25) {
        quarters++;
        cents -= 25;
    }

    nickles = (cents / 5);
    cents %= 5;

    dimes = (cents / 10); 
    cents %= 10;

    pennies = cents;

    std::cout << quarters << "\n";
    std::cout << nickles << "\n";
    std::cout << dimes << "\n";
    std::cout << pennies << "\n";

    return 0;
}