#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 100;
    cents %= 100;

    int dimes = cents / 25;
    cents %= 25;

    int nickles = cents / 10;
    cents %= 10;

    int pennies = cents;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}