int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    assert(n > 0);

    bool dp[2][n];
    dp[0][0] = false;
    for (int i = 1; i < n; i++) {
        dp[0][i] = true;
    }

    int changes = 0;
    for (int i = 0; i < n - 1; i++) {
        dp[i+1][0] = true;
        for (int j = 1; j < n; j++) {
            if ((arr[j-1] <= arr[j]) == dp[i][j-1]) {
                dp[i][j] = dp[i][j-1];
            } else {
                changes++;
                dp[i+1][j] = true;
            }
        }
    }

    if (!dp[n-2][n-1])
        return -1; // Already sorted, no changes needed

    return changes;
}