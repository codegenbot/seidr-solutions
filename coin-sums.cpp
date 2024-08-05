#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int remainder = cents; // new line
    int dimes = remainder / 10;
    remainder %= 10;

    int nickles = remainder / 5;
    remainder %= 5;

    int pennies = remainder;

    cout << quarters << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << pennies << endl;

    return 0;
}