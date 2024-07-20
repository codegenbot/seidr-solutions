```cpp
#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = cents / 10;
    cents %= 10;

    int nickels = cents / 5;
    cents %= 5;

    int pennies = cents;

    output = to_string(quarters) + " quarter(s), " +
        (dimes ? to_string(dimes) + " dime(s), ": "") +
        (nickels ? to_string(nickels) + " nickel(s), ": "") +
        (pennies ? to_string(pennies) + " penny(ies).": " 0 penny(ies).");

    cout << output << endl;

    return 0;
}