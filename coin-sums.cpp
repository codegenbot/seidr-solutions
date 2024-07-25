#include <vector>
#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coinValues = {25, 10, 5, 1}; // quarters, dimes, nickels, pennies

    int coins[4] = {0, 0, 0, 0}; // initialize the number of each type of coin to 0

    for (int i = 0; i < 4; i++) {
        while (cents >= coinValues[i]) {
            cents -= coinValues[i];
            coins[i]++;
        }
    }

    cout << coins[3] << endl;
    cout << coins[2] << endl;
    cout << coins[1] << endl;
    cout << coins[0] << endl;

    return 0;
}