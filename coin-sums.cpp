#include <vector>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1};
    vector<int> results(4, 0);

    for (int i = 0; i < 4; ++i) {
        while (cents >= coins[i]) {
            int count = cents / coins[i];
            cents -= count * coins[i];
            results[i] = count;
        }
    }

    cout << results[0] << endl;
    cout << results[1] << endl;
    cout << results[2] << endl;
    cout << results[3] << endl;

    return 0;
}