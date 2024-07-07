#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25; // calculate full quarters
    cents %= 25; // subtract full quarters from cents
    int total_quarters = min(quarters, cents / 25); // update quarters to only consider full quarters and remaining cents
    int remaining_cents = cents % 25;

    int dimes = remaining_cents / 10;
    remaining_cents %= 10;
    int nickles = remaining_cents / 5;
    remaining_cents %= 5;
    int pennies = remaining_cents;

    cout << total_quarters << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << pennies << endl;

    return 0;
}