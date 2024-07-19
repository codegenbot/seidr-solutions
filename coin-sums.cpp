#include <vector>
#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1}; // values of quarters, dimes, nickles, pennies

    vector<int> result(4, 0); // count of each type of coin

    for (int i = 0; i < coins.size(); i++) {
        while (cents >= coins[i]) {
            cents -= coins[i];
            result[i]++;
        }
    }

    cout << result[0] << endl; // quarters
    cout << result[1] << endl; // dimes
    cout << result[2] << endl; // nickles
    cout << result[3] << endl; // pennies

    return 0;
}