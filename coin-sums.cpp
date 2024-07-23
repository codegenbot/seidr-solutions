#include <vector>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1}; // quarter, dime, nickel, penny
    vector<int> counts(4); // count of each coin type

    for (int i = 0; i < 4; i++) {
        while (cents >= coins[i]) {
            int count = cents / coins[i];
            cents %= coins[i];
            counts[i] = count;
        }
    }

    cout << counts[3] << endl; // pennies
    for (int i = 2; i >= 0; i--) {
        if (counts[i] > 0) {
            cout << counts[i] << endl; // other coins
            break;
        }
    }

    return 0;
}