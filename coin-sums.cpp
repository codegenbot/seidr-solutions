#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    if (cents < 0) {
        cout << "Error: Please enter a non-negative integer.\n";
        return -1;
    }

    int quarters = cents / 25;
    while(cents >= 25) {
        cents -= 25;
        quarters++;
    }

    int dimes = cents / 10;
    while(cents >= 10) {
        cents -= 10;
        dimes++;
    }

    int nickles = cents / 5;
    while(cents >= 5) {
        cents -= 5;
        nickles++;
    }

    int pennies = cents;

    cout << quarters << "\n";
    cout << dimes << "\n";
    cout << nickles << "\n";
    cout << pennies << "\n";

    return 0;
}