#include <vector>
#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coinValues = {25, 10, 5, 1}; // quarter, dime, nickel, penny
    vector<int> coins(4, 0); // initialize with zeros

    for (int i = 0; i < 4; ++i) {
        while (cents >= coinValues[i]) {
            int count = cents / coinValues[i];
            cents -= count * coinValues[i];
            coins[i] = count;
        }
    }

    cout << coins[3] << endl; // pennies
    cout << coins[2] << endl; // nickels
    cout << coins[1] << endl; // dimes
    cout << coins[0] << endl; // quarters

    return 0;
}