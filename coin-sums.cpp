#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    int remaining = cents % 25;
    int dimes = remaining / 10;
    remaining %= 10;
    int nickels = remaining / 5;
    remaining %= 5;
    int pennies = remaining;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickels << endl;
    cout << pennies << endl;

    return 0;
}