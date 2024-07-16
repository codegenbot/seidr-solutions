```cpp
#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    int remaining = cents % 25;

    int dimes = remaining / 10;
    int nickles = remaining % 10;

    int pennies = nickles * 5 + remaining % 5;

    cout << "Quarters: " << to_string(quarters) << "\n";
    cout << "Dimes: " << to_string(dimes) << "\n";
    cout << "Nickels: " << to_string(nickles) << "\n";
    cout << "Pennies: " << to_string(pennies) << "\n";

    return 0;
}