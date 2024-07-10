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
        std::cout << dimes << " dime" << (dimes > 1 ? "s" : "") << std::endl;
    }
    if (nickles > 0) {
        std::cout << nickles << " nickel" << (nickles > 1 ? "s" : "") << std::endl;
    }
    if (pennies > 0) {
        std::cout << pennies << " penny" << (pennies > 1 ? "s" : "") << std::endl;
    }

    return 0;
}