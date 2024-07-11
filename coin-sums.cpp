#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = cents / 1;
    int nickels = cents / 5 - pennies / 100;
    int dimes = cents / 10 - pennies / 1000 - nickels * 20;
    int quarters = cents / 25 - pennies / 4000 - nickels * 50 - dimes * 200;

    cout << pennies << endl;
    cout << nickels << endl;
    cout << dimes << endl;
    cout << quarters << endl;

    return 0;
}