```cpp
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

    cout << "Quarters: " << std::to_string(quarters) << " coins\n";
    cout << "Dimes: " << std::to_string(dimes) << " coins\n";
    cout << "Nickles: " << std::to_string(nickles) << " coins\n";
    cout << "Pennies: " << std::to_string(pennies) << " coins\n";

    return 0;
}