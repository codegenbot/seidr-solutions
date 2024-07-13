#include <vector>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1}; // values of quarters, dimes, nickels, pennies in cents

    vector<int> results(4, 0); // count of each type of coin
    for (int i = 0; i < 4; ++i) {
        while (cents >= coins[i]) {
            cents -= coins[i];
            results[i]++;
        }
    }

    cout << results[3] << endl;
    for (int i = 2; i >= 0; --i)
        cout << results[i] << " ";
    cout << endl;

    return 0;
}