#include <vector>
#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1}; // values of quarters, dimes, nickels and pennies in cents

    vector<int> result(4, 0); // initialize the result with 0 for each coin type

    while (cents > 0) {
        for (int i = 0; i < coins.size(); i++) {
            while (cents >= coins[i]) {
                cents -= coins[i];
                result[i]++;
            }
        }
    }

    cout << result[0] << endl; // print the number of quarters
    cout << result[1] << endl; // print the number of dimes
    cout << result[2] << endl; // print the number of nickels
    cout << result[3] << endl; // print the number of pennies

    return 0;
}