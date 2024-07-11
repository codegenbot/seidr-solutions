```cpp
#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = cents / 1;
    cents %= 1; // remaining cents after taking all pennies
    int nickels = cents / 5;
    cents %= 5; // remaining cents after taking all nickels
    int dimes = cents / 10;
    cents %= 10; // remaining cents after taking all dimes
    int quarters = cents / 25;
    cents %= 25; // remaining cents after taking all quarters

    cout << pennies + (cents > 0) << endl;
    cout << nickels + (cents >= 5) << endl;
    cout << dimes + (cents >= 10) << endl;
    cout << quarters + (cents >= 25) << endl;

    return 0;
}