#include <vector>
#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1};
    vector<vector<int>> dp(cents + 1, vector<int>(4));

    for (int i = 0; i <= cents; i++) {
        dp[i][3] = 0;
        for (int j = 3; j >= 0; j--) {
            if (coins[j] > i) {
                dp[i][j] = dp[i][j + 1];
            } else {
                dp[i][j] = min(dp[i - coins[j]][j] + 1, dp[i][j + 1]);
            }
        }
    }

    int q = cents / 25;
    int n = (cents % 25) / 10;
    int d = ((cents % 25) % 10) / 5;
    int p = cents % 5;

    cout << "Quarters: " << q << endl;
    cout << "Nickels: " << n << endl;
    cout << "Dimes: " << d << endl;
    cout << "Pennies: " << p << endl;

    return 0;
}