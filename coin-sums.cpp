#include <iostream>

int main() {
    int cents;
    std::cout << "Enter the number of cents: ";
    std::cin >> cents;

    int dimes = cents / 10;
    int remaining_cents = cents % 10; 
    int quarters = remaining_cents / 25;
    remaining_cents %= 25; 
    while (remaining_cents >= 25) { 
        quarters++; remaining_cents -= 25; }
    while (remaining_cents >= 10) { 
        dimes++; remaining_cents -= 10; }

    int nickles = remaining_cents / 5;
    remaining_cents %= 5; 
    while (remaining_cents >= 5) { nickles++; remaining_cents -= 5; }

    int pennies = remaining_cents;

    std::cout << "Quarters: " << quarters << std::endl;
    std::cout << "Dimes: " << dimes << std::endl;
    std::cout << "Nickles: " << nickles << std::endl;
    std::cout << "Pennies: " << pennies << std::endl;

    return 0;
}