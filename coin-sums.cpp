#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = cents / 25;
    cents %= 25;

    int dimes = 0;
    int nickles = 0;
    int pennies = 0;

    while (cents >= 10) {
        dimes = cents / 10;
        cents -= dimes * 10;
    }

    while (cents >= 5) {
        nickles = cents / 5;
        cents -= nickles * 5;
    }

    pennies = cents;

    cout << quarters << " quarter" << (quarters > 1 ? "s" : "") << endl;
    if (dimes > 0) {
        cout << dimes << " dime" << (dimes > 1 ? "s" : "") << endl;
    }
    if (nickles > 0) {
        cout << nickles << " nickel" << (nickles > 1 ? "s" : "") << endl;
    }
    if (pennies > 0) {
        cout << pennies << " penny" << (pennies > 1 ? "s" : "") << endl;
    }

    return 0;
}