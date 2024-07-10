#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    int quarters = 0, dimes = 0, nickles = 0, pennies = 0;
    
    // Calculate Quarters
    while (cents >= 25) {
        quarters++;
        cents -= 25;
    }

    // Calculate Dimes
    while (cents >= 10) {
        dimes++;
        cents -= 10;
    }

    // Calculate Nickles
    while (cents >= 5) {
        nickles++;
        cents -= 5;
    }

    // Calculate Pennies
    pennies = cents;

    std::cout << quarters << " quarter" << (quarters > 1 ? "s" : "") << std::endl;
    if (dimes > 0) {
        if (dimes > 1) {
            std::cout << dimes << " dimes" << std::endl;
        } else {
            std::cout << dimes << " dime" << std::endl;
        }
    }
    if (nickles > 0) {
        if (nickles > 1) {
            std::cout << nickles << " nickels" << std::endl;
        } else {
            std::cout << nickles << " nickel" << std::endl;
        }
    }
    if (pennies > 0) {
        if (pennies > 1) {
            std::cout << pennies << " pennies" << std::endl;
        } else {
            std::cout << pennies << " penny" << std::endl;
        }
    }

    return 0;
}