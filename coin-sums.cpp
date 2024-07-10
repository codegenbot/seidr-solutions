#include <vector>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1}; // values of quarters, dimes, nickles and pennies in cents
    vector<int> count(4); // to store the count of each type of coin

    for (int i = 0; i < 4; i++) {
        while (cents >= coins[i]) {
            int numCoins = cents / coins[i];
            cents -= numCoins * coins[i];
            count[i] = numCoins;
        }
    }

    cout << count[3] << endl; // print the number of pennies
    for (int i = 2; i >= 0; i--) {
        if (count[i] > 0) {
            cout << count[i] << endl; // print the number of each type of coin
            break;
        }
    }

    return 0;
}