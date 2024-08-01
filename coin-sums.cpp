#include <vector>
#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1}; // quarters, dimes, nickles, pennies
    vector<int> results(4);

    for (int i = 0; i < 4; i++) {
        while (cents >= coins[i]) {
            int count = cents / coins[i];
            cents -= count * coins[i];
            results[i] = count;
        }
    }

    cout << results[3] << endl; // print pennies
    cout << results[2] << endl; // print nickles
    cout << results[1] << endl; // print dimes
    cout << results[0] << endl; // print quarters

    return 0;
}