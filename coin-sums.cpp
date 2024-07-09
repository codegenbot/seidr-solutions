#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int pennies = cents % 5;
    cents /= 5;

    int nickles = cents / 10;
    cents %= 10;

    int dimes = 0;
    while (cents >= 25) {
        dimes++;
        cents -= 25;
    }

    int quarters = 0;
    while (cents >= 100) {
        quarters++;
        cents -= 100;
    }

    while (cents >= 25) {
        dimes++;
        cents -= 25;
    }

    while (cents >= 10) {
        nickles++;
        cents -= 10;
    }

    while (cents >= 5) {
        pennies++;
        cents -= 5;
    }

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}