#include <vector>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coinValues = {25, 10, 5, 1}; // values of quarters, dimes, nickels, pennies in cents
    vector<int> coins(4, 0); // number of each type of coin

    for (int i = 0; i < 4; i++) {
        while (cents >= coinValues[i]) {
            int count = cents / coinValues[i];
            cents %= coinValues[i];
            coins[i] = count;
        }
    }

    cout << coins[3] << endl; // print the number of pennies
    for (int i = 2; i >= 0; i--) {
        if (coins[i] > 0) {
            cout << coins[i] << endl; // print the number of each type of coin in order from quarters to pennies
            break;
        }
    }

    return 0;
}