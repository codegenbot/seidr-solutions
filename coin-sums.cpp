#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    int quarters = 0;
    while (cents >= 25) {
        ++quarters;
        cents -= 25;
    }

    int pennies = 0;
    while (cents >= 5) {
        int nickles = cents / 5;
        for (int i = 0; i < nickles; ++i) {
            std::cout << "1 nickel\n";
        }
        pennies += (cents %= 5);
    }
    std::cout << pennies << " penny" << (pennies > 1 ? "s" : "") << "\n";

    return 0;
}