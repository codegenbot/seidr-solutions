#include <iostream>
#include <vector>

int main() {
    std::vector<int> coinCounts = {0, 0, 0, 0}; // quarters, dimes, nickels, pennies

    std::cout << "Enter the number of cents: ";
    int cents;
    std::cin >> cents;

    while (cents >= 25) {
        ++coinCounts[0]; 
        cents -= 25;
    }
    while (cents >= 10) {
        ++coinCounts[1]; 
        cents -= 10;
    }
    while (cents >= 5) {
        ++coinCounts[2]; 
        cents -= 5;
    }
    coinCounts[3] = cents; 

    std::cout << "Quarters: " << coinCounts[0] << std::endl;
    if(coinCounts[1] > 0)
        std::cout << "Dimes: " << coinCounts[1] << std::endl;
    else
        std::cout << "Dimes: 0" << std::endl;

    if(coinCounts[2] > 0)
        std::cout << "Nickles: " << coinCounts[2] << std::endl;
    else
        std::cout << "Nickles: 0" << std::endl;

    std::cout << "Pennies: " << coinCounts[3] << std::endl;

    return 0;
}