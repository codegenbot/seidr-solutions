bool issame(vector<int> a, vector<int> b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0) {
                dp[i][j] = grid[i][j];
            } else if (i > 0) {
                dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j];
            } else {
                dp[i][j] = min(dp[i][j-1], dp[i-1][j]) + grid[i][j];
            }
        }
    }
    
    vector<int> res;
    int i = n - 1, j = n - 1;
    for (int l = 0; l < k; l++) {
        res.push_back(grid[i][j]);
        if (i > 0 && j > 0) {
            if (dp[i-1][j] == dp[i][j-1]) {
                i--;
            } else {
                j--;
            }
        } else if (i > 0) {
            i--;
        } else {
            j--;
        }
    }
    
    return res;
}

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), vector<int>{1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    return 0;
}