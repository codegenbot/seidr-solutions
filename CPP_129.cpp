
vector<int> minPath(vector<vector<int>> grid, int k){
    int rows = grid.size();
    int cols = grid[0].size();
    vector<vector<int>> dp(rows, vector<int>(cols, INT_MAX));
    dp[0][0] = grid[0][0];

    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
            if(i > 0) dp[i][j] = min(dp[i][j], dp[i - 1][j] + grid[i][j]);
            if(j > 0) dp[i][j] = min(dp[i][j], dp[i][j - 1] + grid[i][j]);
        }
    }

    vector<int> path;
    int r = rows - 1, c = cols - 1;
    while(r > 0 || c > 0){
        path.push_back(grid[r][c]);
        if(r > 0 && dp[r][c] - grid[r][c] == dp[r - 1][c]){
            r--;
        } else {
            c--;
        }
    }
    path.push_back(grid[0][0]);

    reverse(path.begin(), path.end());
    return path;
}