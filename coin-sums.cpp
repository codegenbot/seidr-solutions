#include <iostream>

int main() {
    int cents;
    std::cout << "Enter the number of cents: ";
    std::cin >> cents;

    int quarters = cents / 25;
    cents %= 25; 
    while (cents >= 25) { quarters++; cents -= 25; }
    
    int dimes = cents / 10;
    cents %= 10; 
    while (cents >= 10) { dimes++; cents -= 10; }

    int nickles = cents / 5;
    cents %= 5; 
    while (cents >= 5) { nickles++; cents -= 5; }

    int pennies = cents % 5;
    cents /= 5;

    std::cout << "Quarters: " << quarters << std::endl;
    std::cout << "Dimes: " << dimes << std::endl;
    std::cout << "Nickles: " << nickles << std::endl;
    std::cout << "Pennies: " << pennies << std::endl;

    return 0;
}