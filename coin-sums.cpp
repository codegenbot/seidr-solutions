#include <iostream>
using namespace std;

void coinSums(int cents) {
    int pennies = 0;
    int nickels = 0;
    int dimes = 0;
    int quarters = 0;

    while (cents > 25) {
        quarters++;
        cents -= 25;
    }

    while (cents > 10) {
        dimes++;
        cents -= 10;
    }

    while (cents > 5) {
        nickels++;
        cents -= 5;
    }

    pennies = cents;

    cout << quarters << endl;
    cout << nickels << endl;
    cout << dimes << endl;
    cout << pennies << endl;
}

int main() {
    int cents;
    cin >> cents;
    coinSums(cents);
    return 0;
}