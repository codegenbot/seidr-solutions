#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int quarters = 0, dimes = 0, nickles = 0;
    while (cents >= 25) {
        ++quarters;
        cents -= 25;
    }
    while (cents >= 10) {
        ++dimes;
        cents -= 10;
    }
    while (cents >= 5) {
        ++nickles;
        cents -= 5;
    }

    int pennies = cents;

    cout << quarters << " quarters" << endl;
    cout << dimes << " dimes" << endl;
    cout << nickles << " nickels" << endl;
    cout << pennies << " pennies" << endl;

    return 0;
}