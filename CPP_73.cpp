Here is the completed code:

int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<bool>> dp(n, vector<bool>(n));
    for (int i = 0; i < n; i++) {
        dp[i][i] = true;
    }
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i < n - len + 1; i++) {
            int j = i + len - 1;
            if (arr[i] == arr[j]) {
                dp[i][j] = true;
            } else {
                dp[i][j] = false;
                for (int k = i; k <= j; k++) {
                    if (!dp[i][k-1] || !dp[k+1][j]) {
                        dp[i][j] = true;
                        break;
                    }
                }
            }
        }
    }
    int ans = 0;
    for (int i = 0, j = n - 1; i < j; ) {
        if (!dp[i][j]) {
            ans++;
            if (i != j) {
                i++;
                j--;
            } else {
                break;
            }
        } else {
            i++;
            j--;
        }
    }
    return ans;
}