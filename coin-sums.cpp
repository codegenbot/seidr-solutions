#include <vector>
#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1};
    vector<vector<int>> dp(cents + 1, vector<int>(4));

    for (int i = 0; i <= cents; i++) {
        dp[i][3] = i;
        for (int j = 3; j >= 0; j--) {
            if (coins[j] > i) {
                dp[i][j] = dp[i][j + 1];
            } else {
                dp[i][j] = min(dp[i - coins[j]][j] + 1, dp[i][j + 1]);
            }
        }
    }

    cout << dp[cents][0] << endl;
    cout << dp[cents][1] << endl;
    cout << dp[cents][2] << endl;
    cout << dp[cents][3] << endl;

    return 0;
}