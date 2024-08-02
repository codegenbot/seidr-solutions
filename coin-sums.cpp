#include <vector>
#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1}; // values of quarters, dimes, nickles, pennies in cents

    vector<int> result(4, 0); // initialize the result array with all zeros

    for (int i = 3; i >= 0; --i) {
        while (cents >= coins[i]) {
            cents -= coins[i];
            result[i]++;
        }
    }

    cout << result[3] << endl;
    cout << result[2] << endl;
    cout << result[1] << endl;
    cout << result[0] << endl;

    return 0;
}