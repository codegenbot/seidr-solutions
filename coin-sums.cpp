#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1};
    vector<int> coinCounts(4);

    for (int i = 0; i < 4; i++) {
        while (cents >= coins[i]) {
            coinCounts[i]++;
            cents -= coins[i];
        }
    }

    cout << "Quarters: " << coinCounts[3] << endl;
    cout << "Nickels: " << coinCounts[2] << endl;
    cout << "Dimes: " << coinCounts[1] << endl;
    cout << "Pennies: " << coinCounts[0] << endl;

    return 0;
}