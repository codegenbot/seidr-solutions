#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int pennies = cents % 5;
    cents /= 5;
    int nickles = cents;

    int dimes = (cents + 4) / 10;

    cout << quarters << endl;
    cout << nickles << endl;
    cout << dimes / 10 << endl;
    cout << pennies << endl;

    return 0;
}