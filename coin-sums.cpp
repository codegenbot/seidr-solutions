#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    int remainingCents = cents % 25; 

    int dimes = remainingCents / 10;
    remainingCents %= 10;

    int nickles = remainingCents / 5;
    remainingCents %= 5;

    int pennies = remainingCents;

    cout << quarters << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << pennies << endl;

    return 0;
}