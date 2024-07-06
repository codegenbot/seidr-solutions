Here is the solution:

int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<bool>> dp(n, vector<bool>(n));
    for (int i = 0; i < n; ++i)
        for (int j = i; j >= 0; --j)
            if (arr[i] == arr[j])
                dp[i][j] = true;
            else
                dp[i][j] = dp[i-1][j-1];
    int ans = 0;
    bool is_palindrome = false;
    for (int i = n - 1; i > 0; --i) {
        if (!dp[i-1][0]) is_palindrome = true;
        else break;
    }
    for (int i = 0; i < n; ++i) {
        if (!is_palindrome) ans++;
        is_palindrome = dp[n-i-1][n-1];
    }
    return ans;
}