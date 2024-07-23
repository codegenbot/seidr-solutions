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

    int nickles = 0;
    while (cents >= 5) {
        cents -= 5;
        nickles++;
    }
    int pennies = cents % 5;
    cents /= 5;

    cout << quarters << endl;
    cout << nickles << endl;
    cout << pennies << endl;
    cout << 0 << endl; // Initialize to zero

    return 0;
}