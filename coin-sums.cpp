#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = cents % 5;
    cents /= 5;

    int nickles = cents / 10;
    cents %= 10;

    int dimes = cents / 25;
    cents %= 25;

    int quarters = cents / 100;
    cents %= 100;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}