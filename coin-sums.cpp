#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = min(cents / 25, cents / 25);
    cents %= 25;

    int dimes = min(cents / 10, quarters + cents / 10);
    cents %= 10;

    int nickles = min(cents / 5, dimes + cents / 5);
    cents %= 5;

    int pennies = cents;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}