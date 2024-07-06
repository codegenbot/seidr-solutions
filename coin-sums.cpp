#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = min(quarters, cents / 25);
    cents %= 25;

    int dimes = min(dimes, (cents % 25) / 10);
    cents %= 10;

    int nickles = min(nickles, (cents % 10) / 5);
    cents %= 5;

    int pennies = min(pennies, cents);

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}