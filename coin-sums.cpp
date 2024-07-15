#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = cents / 1;
    int remaining_cents = cents % 1;
    int nickels = remaining_cents / 5;
    remaining_cents %= 5;

    int dimes = remaining_cents / 10;
    remaining_cents %= 10;

    int quarters = remaining_cents / 25;
    remaining_cents %= 25;

    cout << pennies << endl;
    cout << nickels << endl;
    cout << dimes << endl;
    cout << quarters << endl;

    return 0;
}