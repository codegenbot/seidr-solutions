#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    if (quarters * 25 <= cents) {
        cents %= 25;
    } else {
        quarters = cents / 25;
        cents = 0;
    }

    int dimes = cents / 10;
    if (dimes * 10 <= cents) {
        cents %= 10;
    } else {
        dimes = cents / 10;
        cents = 0;
    }

    int nickles = cents / 5;
    if (nickles * 5 <= cents) {
        cents %= 5;
    } else {
        nickles = cents / 5;
        cents = 0;
    }

    int pennies = cents;

    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickles << endl;
    cout << "Pennies: " << pennies << endl;

    return 0;
}