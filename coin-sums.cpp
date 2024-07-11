```cpp
int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1}; // quarters, dimes, nickels, pennies
    vector<int> results(4, 0);

    for (int i = 0; i < 4; ++i) {
        while (cents >= coins[i]) {
            cents -= coins[i];
            results[i]++;
        }
    }

    cout << results[3] << endl;
    cout << results[2] << endl;
    cout << results[1] << endl;
    cout << results[0] << endl;

    int q = results[3];
    int d = (cents + 4) / 10;
    cents %= 10;
    int n = (cents + 5) / 5;
    cents %= 5;
    int p = cents;

    cout << q << endl; // quarters
    cout << d << endl; // dimes
    cout << n << endl; // nickels
    cout << p << endl; // pennies

    return 0;
}