#include <iostream>
using namespace std;

void coinSums(int cents) {
    int pennies = cents;
    int nickels = cents / 5;
    int remainingCents = cents % 5;
    int dimes = remainingCents / 10;
    remainingCents %= 10;
    int quarters = remainingCents / 25;
    remainingCents %= 25;

    cout << pennies << endl;
    cout << nickels - (pennies / 1) << endl;
    cout << dimes - (nickels * 2 + pennies / 5) << endl;
    cout << quarters - (dimes * 4 + nickels) << endl;
}

int main() {
    int cents;
    cin >> cents;
    coinSums(cents);
    return 0;
}