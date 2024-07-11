#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = cents / 1;
    pennies = min(pennies, (cents - pennies) / 1);
    cout << pennies << endl;

    int nickels = (cents - pennies * 100) / 5;
    nickels = min(nickels, (cents - pennies * 100 - nickels * 50) / 5);
    cout << nickels << endl;

    int dimes = (cents - pennies * 100 - nickels * 50) / 10;
    dimes = min(dimes, (cents - pennies * 100 - nickels * 50 - dimes * 20) / 10);
    cout << dimes << endl;

    int quarters = (cents - pennies * 100 - nickels * 50 - dimes * 20) / 25;
    cout << quarters << endl;

    return 0;
}