#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    int remainingCents = cents % 25;

    int dimes = remainingCents / 10;
    int remainingNickelsCents = remainingCents % 10;

    int nickles = remainingNickelsCents / 5;
    int remainingPenniesCents = remainingNickelsCents % 5;

    int pennies = remainingPenniesCents;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}