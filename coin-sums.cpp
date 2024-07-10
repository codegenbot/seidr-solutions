```cpp
#include <iostream>
#include <string>

int main() {
    int cents;
    std::cin >> cents;

    int quarters = cents / 25;
    cents %= 25;
    int dimes = cents / 10;
    cents %= 10;
    int nickles = cents / 5;
    cents %= 5;
    int pennies = cents;

    int totalCoins = quarters + dimes + nickles + pennies;

    if (totalCoins > 0) {
        std::cout << quarters << " quarter" << (quarters > 1 ? "s, " : ", ");
        if (dimes > 0) {
            std::string dimeStr = (dimes > 1 ? "s, " : ", ");
            std::cout << dimes << " dime" << dimeStr;
        }
        if (nickles > 0) {
            std::string nickelStr = (nickles > 1 ? "s, " : ", ");
            std::cout << nickles << " nickel" << nickelStr;
        }
        if (pennies > 0) {
            std::string pennyStr = pennies == 1 ? " penny" : " pennies";
            std::cout << pennies << pennyStr;
        }
        std::cout << std::endl;
    } else {
        std::cout << "You don't need any coins." << std::endl;
    }

    return 0;
}