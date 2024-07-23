int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    assert(n > 0);

    int changes = 0;
    bool dp[n][n];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (!dp[i][j]) {
                changes++;
            }
            dp[i][j] = true;
        }
    }
    if (changes == 0)
        return -1; // Already sorted, no changes needed
    return changes;
}