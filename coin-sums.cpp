#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    int remaining = cents - quarters * 25;

    int dimes = remaining / 10;
    remaining -= dimes * 10;

    int nickels = remaining / 5;
    remaining -= nickels * 5;

    int pennies = remaining;

    cout << quarters << endl;
    cout << nickels << endl;
    cout << dimes << endl;
    cout << pennies << endl;

    return 0;
}