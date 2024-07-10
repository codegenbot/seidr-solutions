```cpp
#include <iostream>

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

    if (quarters > 0) {
        std::cout << (quarters > 0 ? quarters + " quarter" + (quarters > 1 ? "s, " : ", ") : "");
    }

    if (dimes > 0) {
        std::cout << (dimes > 0 ? dimes + " dime" + (dimes > 1 ? "s, " : ", ") : "");
    }

    if (nickles > 0) {
        std::cout << (nickles > 0 ? nickles + " nickel" + (nickles > 1 ? "s, " : ", ") : "");
    }

    if (pennies > 0) {
        std::cout << pennies << " penny";
    }

    if ((quarters + dimes + nickles + pennies) == 0) {
        std::cout << "You don't need any coins.";
    } else {
        std::cout << std::endl;
    }

    return 0;
}