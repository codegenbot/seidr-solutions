#include <vector>
#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1}; // quarters, dimes, nickles, pennies
    vector<int> result(4, 0);
    vector<int> remaining_cents({cents});

    for (int i = 3; i >= 0 && remaining_cents[0] > 0; --i) {
        int count = remaining_cents[0] / coins[i];
        if (count > 0) {
            remaining_cents[0] %= coins[i];
            result[i] += count;
        }
    }

    cout << result[3] << endl;
    cout << result[2] << endl;
    cout << result[1] << endl;
    cout << result[0] << endl;

    return 0;
}