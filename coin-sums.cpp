```cpp
#include <iostream>
#include <string>

int main() {
    int cents;
    std::cin >> cents;

    std::string quarters = (cents / 25) > 0 ? std::to_string(cents / 25) + " quarter" + ((cents / 25) > 1 ? "s" : "") + ", " : "";
    cents %= 25;

    std::string dimes = (cents / 10) > 0 ? std::to_string(cents / 10) + " dime" + ((cents / 10) > 1 ? "s" : "") + ", " : "";
    cents %= 10;

    std::string nickles = (cents / 5) > 0 ? std::to_string(cents / 5) + " nickel" + ((cents / 5) > 1 ? "s" : "") + ", " : "";
    cents %= 5;

    std::string pennies = (cents) > 0 ? std::to_string(cents) + " penny" + ((cents) > 1 ? "s" : "") : "";

    std::cout << quarters << dimes << nickles << pennies;
    std::cout << std::endl;

    return 0;
}