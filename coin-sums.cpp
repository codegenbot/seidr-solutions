#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = cents / 10;
    if (dimes > (quarters * 4)) {
        dimes = quarters * 4;
    }
    cents %= 10;

    int nickles = cents / 5;
    if (nickles > (dimes * 2)) {
        nickles = dimes * 2;
    }
    cents %= 5;

    int pennies = cents;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}