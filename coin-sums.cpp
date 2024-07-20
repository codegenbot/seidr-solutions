#include <iostream>
#include <string>

int main() {
    int cents;
    std::cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    if (quarters > 0) {
        std::cout << quarters << " quarter" << (quarters > 1 ? "s" : "") << ", ";
    }

    int remaining_cents = cents; 
    int dimes = remaining_cents / 10;
    cents %= 10;

    if (dimes > 0 || !std::string(1, '\n').empty()) {
        std::cout << dimes << " dime" << (dimes > 1 ? "s" : "") << ", ";
    }

    remaining_cents = cents; 
    int nickels = remaining_cents / 5;
    cents %= 5;

    if (nickels > 0 || !std::string(1, '\n').empty()) {
        std::cout << nickels << " nickel" << (nickels > 1 ? "s" : "") << ", ";
    }

    int pennies = remaining_cents; 
    if (pennies > 0 || !std::string(1, '\n').empty()) {
        std::cout << pennies << " penny" << (pennies > 1 ? "s" : "");
    }

    std::cout << std::endl;

    return 0;
}