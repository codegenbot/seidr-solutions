#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = cents;
    cout << pennies / 1 << endl;

    pennies %= 1;

    int nickles = pennies / 5;
    pennies %= 5;
    cout << nickles << endl;

    int dimes = pennies / 10;
    pennies %= 10;
    cout << dimes << endl;

    int quarters = pennies / 25;
    cout << quarters << endl;

    return 0;
}