#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    int remainingCents = cents % 25;

    int dimes = remainingCents / 10;
    int remainingCents2 = remainingCents % 10;

    int nickles = remainingCents2 / 5;
    int pennies = remainingCents2 % 5;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}