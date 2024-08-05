int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1}; // values of quarters, dimes, nickels, and pennies in cents
    vector<int> coinCounts(4, 0); // count of each type of coin

    for (int i = 0; i < 4; i++) {
        while (cents >= coins[i]) {
            int count = cents / coins[i];
            cents -= count * coins[i];
            coinCounts[i] = count;
        }
    }

    cout << coinCounts[3] << endl; // print the number of pennies
    for (int i = 2; i >= 0; i--) {
        if (coinCounts[i] > 0) {
            cout << coinCounts[i] << endl; // print the number of other coins
            break;
        }
    }

    return 0;
}