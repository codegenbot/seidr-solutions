#include <vector>
using namespace std;

int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<bool>> dp(n, vector<bool>(n));
    for (int i = 0; i < n; i++) {
        dp[i][i] = true;
    }
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            dp[i][i + 1] = true;
        }
    }
    for (int length = 3; length <= n; length++) {
        for (int i = 0; i < n - length + 1; i++) {
            int j = i + length - 1;
            if (arr[i] == arr[j]) {
                dp[i][j] = dp[i + 1][j - 1];
            } else {
                dp[i][j] = dp[i + 1][j - 1] || dp[i + 1][j] || dp[i][j - 1];
            }
        }
    }
    int changes = 0;
    for (int i = 0; i < n; i++) {
        if (!dp[0][i]) {
            changes++;
        }
    }
    return changes;
}