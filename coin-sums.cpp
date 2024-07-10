#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = cents / 1;
    int nickles = cents / 5 - pennies / 100;
    int dimes = cents / 10 - pennies / 50 - nickles * 2;
    int quarters = cents / 25 - pennies / 25 - nickles * 5 - dimes * 2;

    cout << pennies << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << quarters << endl;

    return 0;
}