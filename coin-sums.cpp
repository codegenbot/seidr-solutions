#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    quarters = cents / 25;
    cents %= 25;

    pennies = cents / 1;
    cents %= 1;

    nickles = cents / 5;
    cents %= 5;

    dimes = cents / 10;
    cents %= 10;

    cout << quarters << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << pennies << endl;

    return 0;
}