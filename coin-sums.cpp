int main() {
    int cents;
    cin >> cents;

    vector<int> coinValues = {25, 10, 5, 1}; // values of quarters, dimes, nickles and pennies in cents
    vector<int> coinCounts(4, 0); // initialize count of each type of coin to 0

    for (int i = 3; i >= 0; --i) {
        while (cents >= coinValues[i]) {
            int numCoins = cents / coinValues[i];
            coinCounts[i] = numCoins;
            cents -= numCoins * coinValues[i];
        }
    }

    cout << coinCounts[3] << endl; // print count of quarters
    cout << coinCounts[2] << endl; // print count of dimes
    cout << coinCounts[1] << endl; // print count of nickles
    cout << coinCounts[0] << endl; // print count of pennies

    return 0;
}