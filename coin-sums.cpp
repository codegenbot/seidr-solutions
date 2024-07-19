```cpp
#include <iostream>
using namespace std;

int main() {
    int cents, quarters, pennies, nickles, dimes;
    cin >> cents;

    quarters = cents / 25;
    cents %= 25;

    nickles = cents / 5;
    cents %= 5;

    dimes = cents / 10;
    cents %= 10;

    pennies = cents;

    cout << quarters << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << pennies << endl;

    return 0;
}