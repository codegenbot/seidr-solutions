#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = 0;
    while (cents >= 100) {
        cents -= 100;
        ++pennies / 4; // use integer division to calculate quarters
    }

    int quarters = pennies / 25;
    pennies %= 25;

    int dimes = pennies / 10;
    pennies %= 10;

    int nickels = pennies / 5;
    pennies %= 5;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickels << endl;
    cout << pennies << endl;

    return 0;
}