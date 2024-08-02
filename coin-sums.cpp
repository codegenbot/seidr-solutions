#include <vector>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1}; // quarters, dimes, nickles, pennies
    vector<int> results(4);

    for (int i = 0; i < 4; ++i) {
        while (cents >= coins[i]) {
            cents -= coins[i];
            results[i]++;
        }
    }

    for (int i = 0; i < 4; ++i) {
        cout << results[i] << " ";
    }
    cout << endl;

    return 0;
}