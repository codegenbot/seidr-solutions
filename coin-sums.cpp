```cpp
#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int dimes = 0;
    int nickels = 0;
    int pennies = 0;

    int quarters = cents / 25;
    cents %= 25;

    while (cents >= 10) {
        dimes++;
        cents -= 10;
    }

    while (cents >= 5) {
        nickels++;
        cents -= 5;
    }

    pennies = cents; // store the remaining cents as pennies

    std::cout << quarters << " quarter(s)" << std::endl;
    if (dimes > 1) std::cout << dimes << " dime(s)" << std::endl;
    else std::cout << dimes << " dime" << std::endl;
    if (nickels > 1) std::cout << nickels << " nickel(s)" << std::endl;
    else std::cout << nickels << " nickel" << std::endl;
    std::cout << pennies << " penny" << std::endl;

    return 0;
}