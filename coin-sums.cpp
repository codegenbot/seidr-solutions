#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int remaining = cents;
    int nickels = remaining / 5;
    remaining %= 5;

    int dimes = remaining / 10;
    remaining %= 10;

    int quarters = remaining / 25;
    remaining %= 25;

    int pennies = remaining;

    cout << pennies << endl;
    cout << nickels << endl;
    cout << dimes << endl;
    cout << quarters << endl;

    return 0;
}