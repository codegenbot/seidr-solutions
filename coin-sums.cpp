#include <iostream>
using namespace std;

int main() {
    int cents;
    cin >> cents;

    int coins[4] = {0}; // quarters, dimes, nickles, pennies

    for (int coin_value = 25; coin_value > 0; coin_value /= 5) {
        while (cents >= coin_value) {
            coins[coin_value / 25]++;
            cents -= coin_value;
        }
    }

    cout << coins[3] << endl; // quarters
    cout << coins[2] << endl; // dimes
    cout << coins[1] << endl; // nickles
    cout << coins[0] << endl; // pennies

    return 0;
}