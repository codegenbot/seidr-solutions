#include <vector>
#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1}; // values of quarters, dimes, nickles, pennies in cents

    vector<int> result(4, 0); // initialize the result with zero coins of each type

    for (int i = 0; i < 4; i++) {
        while (cents >= coins[i]) {
            int count = cents / coins[i];
            cents -= count * coins[i];
            result[i] = count;
        }
    }

    cout << result[3] << endl; // print the number of pennies
    cout << result[2] << endl; // print the number of nickles
    cout << result[1] << endl; // print the number of dimes
    cout << result[0] << endl; // print the number of quarters

    return 0;
}