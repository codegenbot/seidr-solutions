#include <vector>
#include <iostream>

using namespace std;

int main() {
    int cents;
    cin >> cents;

    vector<int> coins = {25, 10, 5, 1};
    vector<vector<pair<int,int>>> dp(cents + 1, vector<pair<int,int>>(4));

    for (int i = 0; i <= cents; i++) {
        dp[i][3] = make_pair(i, 0); 
        for (int j = 3; j >= 0; j--) {
            if (coins[j] > i) {
                dp[i][j] = dp[i][j + 1];
            } else {
                if (dp[i - coins[j]][j].second + 1 < dp[i][j].second) {
                    dp[i][j] = make_pair(dp[i - coins[j]][j].first + 1, dp[i - coins[j]][j].second + 1);
                } else {
                    dp[i][j] = dp[i][j + 1];
                }
            }
        }
    }

    cout << dp[cents][3].second << " quarters" << endl;
    cout << dp[cents][2].second << " dimes" << endl;
    cout << dp[cents][1].second << " nickles" << endl;
    cout << dp[cents][0].second << " pennies" << endl;

    return 0;
}