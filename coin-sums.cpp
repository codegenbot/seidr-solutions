#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = cents / 1;
    int remainder = cents % 100; // remaining cents

    int nickels = remainder / 5;
    remainder %= 5;

    int dimes = remainder / 10;
    remainder %= 10;

    int quarters = remainder / 25;
    remainder %= 25;

    cout << pennies << endl;
    cout << nickels << endl;
    cout << dimes << endl;
    cout << quarters << endl;

    return 0;
}