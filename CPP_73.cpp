Here is the solution:

int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = i; j >= 0; j--) {
            if (i == j)
                dp[i][j] = 0;
            else
                dp[i][j] = abs(arr[i] - arr[j]) + (dp[i-1][j-1]);
        }
    }
    return dp[n-1][0];
}