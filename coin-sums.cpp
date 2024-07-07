```cpp
#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    // Ensure we use all available quarters (no remainder)
    int quarters = cents / 25;
    cents %= 25;

    // Use as many dimes as possible (up to remaining cents)
    int dimes = cents / 10;
    cents %= 10;

    // Use as many nickles as possible (up to remaining cents)
    int nickles = cents / 5;
    cents %= 5;

    // Remaining cents are pennies
    int pennies = cents;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}