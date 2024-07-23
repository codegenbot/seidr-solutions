int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1}; // values of quarters, dimes, nickles, pennies in cents
    vector<int> coinCounts(4);

    for (int i = 0; i < 4; i++) {
        while (cents >= coins[i]) {
            cents -= coins[i];
            coinCounts[i]++;
        }
    }

    cout << coinCounts[3] << endl; // print the number of pennies
    cout << coinCounts[2] << endl; // print the number of nickles
    cout << coinCounts[1] << endl; // print the number of dimes
    cout << coinCounts[0] << endl; // print the number of quarters

    return 0;
}