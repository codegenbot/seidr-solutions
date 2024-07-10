#include <vector>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1}; // values of quarters, dimes, nickels, and pennies in cents
    vector<int> coinCounts(4);

    for (int i = 0; i < 4; i++) {
        while (cents >= coins[i]) {
            int count = min(cents / coins[i], INT_MAX);
            cents -= coins[i] * count;
            coinCounts[i] += count;
        }
    }

    cout << coinCounts[3] << endl; // print the number of pennies
    for (int i = 2; i >= 0; i--) {
        if (coinCounts[i]) {
            cout << coinCounts[i] << " ";
            if (i == 1) {
                cout << "nickels ";
            } else if (i == 2) {
                cout << "dimes ";
            } else {
                cout << "quarters ";
            }
        }
    }
    cout << endl;

    return 0;
}