#include <vector>
#include <iostream>

using namespace std;

int main() {
    uint64_t cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1};
    vector<int> result(4, 0);
    uint64_t remaining = cents;

    for (int i = 0; i < 4; i++) {
        while (remaining >= coins[i]) {
            result[i]++;
            remaining -= coins[i];
        }
    }

    cout << result[0] << endl;
    cout << result[1] << endl;
    cout << result[2] << endl;
    cout << result[3] << endl;

    return 0;
}