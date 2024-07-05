#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    if (cents < 0) {
        cout << "Error: Please enter a non-negative integer.\n";
        return -1;
    }

    int quarters = cents / 25;
    cents %= 25;

    int dimes = cents / 10;
    cents %= 10;

    int nickles = cents / 5;
    cents %= 5;

    int pennies = cents;

    cout << "Quarters: " << std::to_string(quarters) << " coin" << (quarters > 1 ? "s" : "") << "\n";
    cout << "Dimes: " << std::to_string(dimes) << " coin" << (dimes > 1 ? "s" : "") << "\n";
    cout << "Nickles: " << std::to_string(nickles) << " coin" << (nickles > 1 ? "s" : "") << "\n";
    cout << "Pennies: " << std::to_string(pennies) << " coin" << (pennies > 1 ? "s" : "") << "\n";

    return 0;
}