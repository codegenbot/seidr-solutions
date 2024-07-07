```cpp
#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = 0;
    int dimes = 0;
    int nickles = 0;
    int pennies = 0;

    quarters = min(quarters, cents / 25);
    cents %= 25;

    dimes = min(dimes, (cents % 25) / 10);
    cents %= 10;

    nickles = min(nickles, (cents % 10) / 5);
    cents %= 5;

    pennies = min(pennies, cents);

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}