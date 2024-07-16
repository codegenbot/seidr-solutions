```cpp
#include <iostream>
#include <string>

int main() {
    int cents;
    std::cin >> cents;

    std::string quarters = std::to_string(cents / 25);
    cents %= 25;

    std::string dimes = std::to_string(cents / 10);
    cents %= 10;

    std::string nickles = std::to_string(cents / 5);
    cents %= 5;

    std::string pennies = std::to_string(cents);

    std::cout << "Quarters: " << quarters << "\n";
    std::cout << "Dimes: " << dimes << "\n";
    std::cout << "Nickels: " << nickles << "\n";
    std::cout << "Pennies: " << pennies << "\n";

    return 0;
}