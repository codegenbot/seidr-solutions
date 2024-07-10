#include <iostream>

int main() {
    int cents;
    std::cin >> cents;

    int remain_cents = cents;
    int num_quarters = remain_cents / 25;
    remain_cents %= 25;

    int num_dimes = remain_cents / 10;
    remain_cents %= 10;

    int num_nickles = remain_cents / 5;
    remain_cents %= 5;

    int num_pennies = remain_cents;

    std::cout << num_quarters << " quarter" << (num_quarters > 1 ? "s" : "") << std::endl;
    if (num_dimes > 0) {
        std::cout << num_dimes << " dime" << (num_dimes > 1 ? "s" : "") << std::endl;
    }
    if (num_nickles > 0) {
        std::cout << num_nickles << " nickel" << (num_nickles > 1 ? "s" : "") << std::endl;
    }
    if (num_pennies > 0) {
        std::cout << num_pennies << " penny" << (num_pennies > 1 ? "s" : "") << std::endl;
    }

    return 0;
}