#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = 0;
    while (cents >= 25) {
        quarters++;
        cents -= 25;
    }

    int dimes = cents / 10;
    int remaining_cents = cents % 10;

    int nickles = remaining_cents / 5;
    remaining_cents %= 5;

    int pennies = remaining_cents;

    cout << quarters << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << pennies << endl;

    return 0;
}