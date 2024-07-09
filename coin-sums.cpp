#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    cout << quarters << endl;

    int dimes = cents / 10;
    cents %= 10;

    cout << dimes << endl;

    int nickles = cents / 5;
    cents %= 5;

    cout << nickles << endl;

    int pennies = cents;

    cout << pennies << endl;

    return 0;
}