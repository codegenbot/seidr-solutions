#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = min(cents / 25, 999);
    cents %= 25;

    int dimes = min(cents / 10, 99);
    cents %= 10;

    int nickles = min(cents / 5, 9);
    cents %= 5;

    int pennies = min(cents, 0);

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}