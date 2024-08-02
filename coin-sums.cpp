#include <vector>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1}; // quarters, dimes, nickles, pennies
    vector<int> results(4);

    for (int i = 0; i < 4; ++i) {
        int coin = coins[i];
        while (cents >= coin) {
            cents -= coin;
            results[i]++;
        }
    }

    cout << results[3] << endl; // pennies
    cout << results[2] << endl; // nickles
    cout << results[1] << endl; // dimes
    cout << results[0] << endl; // quarters

    return 0;
}