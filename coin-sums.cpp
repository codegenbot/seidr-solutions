```cpp
#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = min(cents / 25, 1);
    cents %= 25;

    int dimes = min(cents / 10, 1);
    cents %= 10;

    int nickles = min(cents / 5, 1);
    cents %= 5;

    int pennies = cents;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}