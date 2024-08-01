#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    int quarters = cents / 25;
    int remainingCents = cents % 25;

    int dimes = remainingCents / 10;
    int remainingCentsAfterDimes = remainingCents % 10;

    int nickles = remainingCentsAfterDimes / 5;
    int pennies = remainingCentsAfterDimes % 5;

    std::cout << quarters << "\n";
    std::cout << dimes << "\n";
    std::cout << nickles << "\n";
    std::cout << pennies << "\n";

    return 0;
}