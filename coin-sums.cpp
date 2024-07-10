#include <vector>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1}; // values of quarters, dimes, nickels, pennies in cents

    vector<int> result(4, 0); // initialize the result with zeros
    for (int i = 3; i >= 0; --i) {
        while (cents >= coins[i]) {
            int count = cents / coins[i];
            cents -= count * coins[i];
            result[i] = count;
        }
    }

    cout << result[3] << endl; // print the number of quarters
    cout << result[2] << endl; // print the number of dimes
    cout << result[1] << endl; // print the number of nickels
    cout << result[0] << endl; // print the number of pennies

    return 0;
}