#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = min(cents / 25, 999);
    cents %= 25;

    while (quarters > 0) {
        if (25 * quarters <= cents) {
            break;
        }
        int dimes = min(cents / 10, 99);
        cents %= 10;
        quarters--;
    }

    int dimeUsed = min(cents / 10, 99);
    cents %= 10;

    int nickles = min(cents / 5, 9);
    cents %= 5;

    int pennies = min(cents, 4);

    cout << quarters << endl;
    cout << dimeUsed << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}