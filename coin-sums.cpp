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

    std::string output = "";
    if (quarters > 0) {
        output += std::to_string(quarters) + " quarter" + (quarters > 1 ? "s" : "") + ", ";
    }
    if (dimes > 0 || !output.empty()) {
        output.pop_back(); // Remove extra comma
        output += std::to_string(dimes) + " dime" + (dimes > 1 ? "s" : "") + ", ";
    }
    if (nickels > 0 || !output.empty()) {
        output.pop_back();
        output += std::to_string(nickels) + " nickel" + (nickels > 1 ? "s" : "") + ", ";
    }
    if (pennies > 0 || !output.empty()) {
        output.pop_back(); // Remove extra comma
        output += std::to_string(pennies) + " penny" + (pennies > 1 ? "s" : "");
    }

    std::cout << output << std::endl;

    return 0;
}