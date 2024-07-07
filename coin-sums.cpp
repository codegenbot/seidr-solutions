#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = min(cents / 25, 999);
    cents %= 25;

    int dimes = 0;
    while (quarters > 0) {
        if (25 * quarters <= cents) {
            dimes = 0;
            break;
        }
        dimes += (cents / 10);
        cents %= 10;
        quarters--;
    }

    int dimeUsed = dimes;

    int nickles = min(cents / 5, 9);
    cents %= 5;

    int pennies = min(cents, 4);

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}