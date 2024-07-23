#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int nickles = cents / 5;
    while (cents >= 5) {
        nickles++;
        cents -= 5;
    }

    int dimes = cents / 10;
    while (cents >= 10) {
        dimes++;
        cents -= 10;
    }

    int quarters = cents / 25;
    while (cents >= 25) {
        quarters++;
        cents -= 25;
    }

    int pennies = (cents % 10);

    cout << quarters << endl;
    cout << nickles << endl;
    cout << dimes << endl;
    cout << pennies << endl;

    return 0;
}