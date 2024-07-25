int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1};
    vector<int> coinCounts(4);

    for (int i = 0; i < 4; i++) {
        while (cents >= coins[i]) {
            coinCounts[i]++;
            cents -= coins[i];
        }
    }

    cout << coinCounts[3] << endl;
    cout << coinCounts[2] << endl;
    cout << coinCounts[1] << endl;
    cout << coinCounts[0] << endl;

    return 0;
}