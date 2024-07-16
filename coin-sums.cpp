#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int nickles = cents / 5;
    cents %= 5;

    if (cents >= 1) {
        int quarters = cents / 25;
        cents %= 25;
    }

    int dimes = cents / 10;
    cents %= 10;

    int pennies = cents;

    cout << nickles << endl;
    cout << dimes << endl;
    cout << (quarters + dimes) * 25 + nickles * 5 + pennies << endl;

    return 0;
}