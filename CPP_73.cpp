Here is the completed code:

int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<bool>> dp(n, vector<bool>(n));
    for (int i = 0; i < n; ++i)
        dp[i][i] = true;
    for (int length = 2; length <= n; ++length) {
        for (int i = 0; i < n - length + 1; ++i) {
            int j = i + length - 1;
            if (arr[i] == arr[j])
                dp[i][j] = true;
            else
                dp[i][j] = false;
        }
    }
    int changes = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j <= n - 1; ++j) {
            if (!dp[i][j]) {
                changes++;
                break;
            }
        }
    }
    return changes;
}