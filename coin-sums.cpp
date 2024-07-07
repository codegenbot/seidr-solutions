#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = min(cents / 25, 999);
    cents %= 25;

    int dimes = min(cents / 10, (999 - quarters * 4) / 10);
    cents %= 10;

    int nickles = min(cents / 5, (99 - dimes * 10) / 5);
    cents %= 5;

    int pennies = min(cents, 4);

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}