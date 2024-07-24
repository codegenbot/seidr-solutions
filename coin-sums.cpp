#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = cents / 1;
    int nickles = cents / 5;
    int dimes = cents / 10;
    int quarters = cents / 25;

    cout << pennies << endl;
    cout << nickles - (pennies * 20) << endl;
    cout << dimes - (nickles * 2) << endl;
    cout << quarters - (dimes * 2) << endl;

    return 0;
}