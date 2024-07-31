bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k){
    // Your implementation for finding the minimum path goes here
    vector<int> result; // Assuming this will contain the result
    
    if (grid.empty() || grid[0].empty()) {
        return result;
    }

    int rows = grid.size();
    int cols = grid[0].size();

    vector<vector<int>> dp(rows, vector<int>(cols, INT_MAX));
    dp[0][0] = grid[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i > 0) {
                dp[i][j] = min(dp[i][j], dp[i - 1][j] + grid[i][j]);
            }
            if (j > 0) {
                dp[i][j] = min(dp[i][j], dp[i][j - 1] + grid[i][j]);
            }
        }
    }

    int remainingK = k;

    for (int i = rows - 1, j = cols - 1; i >= 0 && j >= 0; ) {
        if (i > 0 && dp[i - 1][j] <= dp[i][j] && remainingK >= grid[i][j]) {
            remainingK -= grid[i][j];
            i--;
        } else if (j > 0 && dp[i][j - 1] <= dp[i][j] && remainingK >= grid[i][j]) {
            remainingK -= grid[i][j];
            j--;
        } else {
            result.push_back(i);
            result.push_back(j);
            break;
        }
    }

    reverse(result.begin(), result.end());
    return result;
}