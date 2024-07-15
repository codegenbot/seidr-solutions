#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    // Available coins in descending order
    int quarters = cents / 25;
    int remainingCents = cents % 25;
    int dimes = remainingCents / 10;
    remainingCents %= 10;
    int nickels = remainingCents / 5;
    remainingCents %= 5;
    int pennies = remainingCents;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickels << endl;
    cout << pennies << endl;

    return 0;
}