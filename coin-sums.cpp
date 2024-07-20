#include <iostream>
#include <string>

int main() {
    int cents;
    std::cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = cents / 10;
    cents %= 10;

    int nickels = cents / 5;
    cents %= 5;

    int pennies = cents;

    std::string output;
    output += std::to_string(quarters) + (quarters > 1 ? " quarters" : " quarter") + ", ";
    output += std::to_string(dimes) + (dimes > 1 ? " dimes" : " dime") + ", ";
    output += std::to_string(nickels) + (nickels > 1 ? " nickels" : " nickel") + ", and ";
    output += std::to_string(pennies) + (pennies > 1 ? " pennies" : " penny");

    std::cout << output << std::endl;

    return 0;
}