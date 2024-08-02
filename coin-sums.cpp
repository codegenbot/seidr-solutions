int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1}; // values of quarters, dimes, nickels, and pennies in cents
    vector<int> numCoins(4);

    for(int i = 0; i < 4; i++) {
        while(cents >= coins[i]) {
            cents -= coins[i];
            numCoins[i]++;
        }
    }

    for(int i = 0; i < 4; i++) {
        cout << numCoins[i] << endl;
    }

    return 0;
}