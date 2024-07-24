#include <vector>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1}; // quarter, dime, nickel, penny
    vector<int> res(4, 0);

    for (int i = 3; i >= 0; --i) {
        while (cents >= coins[i]) {
            cents -= coins[i];
            res[i]++;
        }
    }

    cout << res[3] << endl;
    cout << res[2] << endl;
    cout << res[1] << endl;
    cout << res[0] << endl;

    return 0;
}