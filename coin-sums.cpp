Here is the solution:

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1}; // values of quarters, dimes, nickels and pennies
    vector<int> count(coins.size(), 0);

    for (int i = 0; i < coins.size(); ++i) {
        while (cents >= coins[i]) {
            cents -= coins[i];
            ++count[i];
        }
    }

    cout << count[3] << endl; // print the number of pennies
    cout << count[2] << endl; // print the number of nickels
    cout << count[1] << endl; // print the number of dimes
    cout << count[0] << endl; // print the number of quarters

    return 0;
}