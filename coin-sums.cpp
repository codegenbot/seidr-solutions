#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    int remainingCents = cents % 25; 

    int dimes = (remainingCents - (quarters * 25)) / 10;
    int nickles = (remainingCents - (dimes * 10)) / 5;
    int pennies = remainingCents % 5;

    cout << quarters << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << pennies << endl;

    return 0;
}