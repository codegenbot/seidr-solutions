#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = min(cents / 25, (int)ceil((double)cents / 25));
    cents -= quarters * 25;

    int dimes = min((cents - quarters * 25) / 10, (int)ceil(((double)(cents - quarters * 25)) / 10));
    cents -= dimes * 10;

    int nickels = min((cents - dimes * 10) / 5, (int)ceil(((double)(cents - dimes * 10)) / 5));
    cents -= nickels * 5;

    int pennies = cents;
    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickels << endl;
    cout << pennies << endl;

    return 0;
}