#include <vector>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1}; // values of quarters, dimes, nickles, pennies in cents
    vector<int> result(4); // to store the count of each coin type

    for (int i = 0; i < 4; i++) {
        while (cents >= coins[i]) {
            int count = cents / coins[i];
            cents -= count * coins[i];
            result[i] = count;
        }
    }

    cout << result[3] << endl; // pennies
    cout << result[2] << endl; // nickles
    cout << result[1] << endl; // dimes
    cout << result[0] << endl; // quarters

    return 0;
}