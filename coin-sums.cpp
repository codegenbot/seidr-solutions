```cpp
int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1}; // quarters, dimes, nickles, pennies

    vector<int> result(4, 0);

    for (int i = 3; i >= 0; --i) {
        int count = cents / coins[i];
        result[i] = count;
        cents %= coins[i];
    }

    cout << result[3] << endl;
    cout << result[2] << endl;
    cout << result[1] << endl;
    cout << result[0] << endl;

    return 0;
}