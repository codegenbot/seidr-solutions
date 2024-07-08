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
    pennies = cents;

    dimes = pennies / 10; 
    pennies %= 10;

    nickles = pennies / 5; 
    pennies %= 5;

    std::cout << quarters << "\n";
    std::cout << nickles << "\n";
    std::cout << dimes << "\n";
    std::cout << pennies << "\n";

    return 0;
}