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
    cents %= 25;

    while (cents >= 10) {
        dimes++;
        cents -= 10;
    }

    while (cents >= 5) {
        nickles++;
        cents -= 5;
    }

    pennies = cents;

    cout << quarters << "\n";
    cout << dimes << "\n";
    cout << nickles << "\n";
    cout << pennies << "\n";

    return 0;
}