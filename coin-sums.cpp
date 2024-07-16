```cpp
#include <iostream>
#include <string>

int main() {
    int cents;
    std::cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = 0;
    int nickles = 0;
    int pennies = 0;

    while (cents >= 10) {
        dimes = cents / 10;
        cents -= dimes * 10;
    }

    while (cents >= 5) {
        nickles = cents / 5;
        cents -= nickles * 5;
    }

    pennies = cents;

    std::string quartersStr = quarters > 1 ? "quarters" : "quarter";
    if (dimes > 0) {
        std::string dimesStr = dimes > 1 ? "dimes" : "dime";
        std::cout << dimes << " " << dimesStr << std::endl;
    }
    if (nickles > 0) {
        std::string nicklesStr = nickles > 1 ? "nickels" : "nickel";
        std::cout << nickles << " " << nicklesStr << std::endl;
    }
    std::string penniesStr = pennies > 1 ? "pennies" : "penny";
    std::cout << pennies << " " << penniesStr << std::endl;

    std::cout << quarters << " " << quartersStr << std::endl;

    return 0;
}