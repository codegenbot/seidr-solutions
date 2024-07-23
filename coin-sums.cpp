#include <vector>
#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coin_values = {25, 10, 5, 1}; // quarter, dime, nickel, penny
    vector<int> coins(4);

    for (int i = 0; i < 4; i++) {
        while (cents >= coin_values[i]) {
            cents -= coin_values[i];
            coins[i]++;
        }
    }

    cout << coins[3] << endl;
    cout << coins[2] << endl;
    cout << coins[1] << endl;
    cout << coins[0] << endl;

    return 0;
}