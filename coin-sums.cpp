#include <vector>
#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1};
    vector<int> result(4, 0);

    for (int i = 0; i < 4; i++) {
        result[i] = min(result[i], cents / coins[i]);
        cents -= result[i] * coins[i];
    }

    cout << result[3] << " pennies\n";
    cout << result[2] << " nickels, " << (result[1] * 5) % 10 << " pennies\n";
    cout << result[1] << " dimes, " << (result[0] * 25) % 20 << " pennies and " << ((result[0] * 25) % 100 - ((result[0] * 25) % 20)) / 10 << " dimes\n";
    cout << result[0] << " quarters, with " << cents << " remaining.\n";

    return 0;
}