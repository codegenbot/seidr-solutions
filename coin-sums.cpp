#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = 0;
    while (cents >= 25) {
        cents -= 25;
        quarters++;
    }

    int dimes = 0;
    while (cents >= 10) {
        cents -= 10;
        dimes++;
    }

    int nickles = 0;
    while (cents >= 5) {
        cents -= 5;
        nickles++;
    }

    int pennies = cents;

    cout << quarters << endl;
    cout << dimes << endl;
    cout << nickles << endl;
    cout << pennies << endl;

    return 0;
}