#include <iostream>

int main() {
    int cents;
    int quarters = 0;
    int dimes = 0;
    int nickles = 0;

    std::cin >> cents;

    while (cents >= 25) {
        quarters++;
        cents -= 25;
    }

    if(cents >= 10) {
        dimes = cents / 10; 
        cents %= 10;
    }

    if(cents >= 5)
    {
        nickles = cents / 5; 
        cents %= 5;
    }

    int pennies = cents;

    std::cout << quarters << "\n";
    std::cout << nickles << "\n";
    std::cout << dimes << "\n";
    std::cout << pennies << "\n";

    return 0;
}