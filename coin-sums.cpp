```cpp
#include <iostream>

int pennies = 0;
int nickels = 0;
int dimes = 0;
int quarters = 0;

while (cents >= 25) {
    cents -= 25;
    quarters++;
}

while (cents >= 10) {
    cents -= 10;
    dimes++;
}

while (cents >= 5) {
    cents -= 5;
    nickels++;
}

pennies = cents;

std::cout << "Quarters: " << quarters << std::endl;
if(quarters > 1) std::cout << "s ";
std::cout << quarters << std::endl;

std::cout << "Dimes: " << dimes << std::endl;
if(dimes > 1) std::cout << "s ";
std::cout << dimes << std::endl;

std::cout << "Nickels: " << nickels << std::endl;
if(nickels > 1) std::cout << "s ";
std::cout << nickels << std::endl;

std::cout << "Pennies: " << pennies << std::endl;
if(pennies > 1) std::cout << "s ";
std::cout << pennies << std::endl;