#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    int quarters = (cents - dimes*10 - nickles*5) / 25;
    int remaining_cents = cents % 25;

    int dimes = remaining_cents / 10; 
    int remaining_cents %= 10;

    int nickles = remaining_cents / 5; 
    int remaining_cents %= 5;

    int pennies = remaining_cents;

    std::cout << quarters << "\n";
    std::cout << nickles << "\n";
    std::cout << dimes << "\n";
    std::cout << pennies << "\n";

    return 0;
}