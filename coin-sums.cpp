#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = 0;
    while (cents >= 100) {
        quarters++;
        cents -= 100;
    }

    int dimes = 0;
    while (cents >= 25) {
        dimes++;
        cents -= 25;
    }

    int nickles = 0;
    while (cents >= 10) {
        nickles++;
        cents -= 10;
    }

    int pennies = 0;
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