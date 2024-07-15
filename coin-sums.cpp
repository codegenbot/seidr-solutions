#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    int remainingCents = cents % 25;

    cout << quarters << " quarters" << endl;

    int dimes = remainingCents / 10;
    remainingCents %= 10;

    cout << dimes << " dimes" << endl;

    int nickles = remainingCents / 5;
    remainingCents %= 5;

    cout << nickles << " nickels" << endl;

    int pennies = remainingCents;

    cout << pennies << " pennies" << endl;

    return 0;
}