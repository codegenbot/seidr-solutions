vector<int> minPath(vector<vector<int>> grid, int k){
    vector<vector<int>> dp(grid.size(), vector<int>(grid[0].size(), INT_MAX));
    dp[0][0] = grid[0][0];
    
    for(int i = 0; i < grid.size(); ++i){
        for(int j = 0; j < grid[0].size(); ++j){
            if(i > 0) dp[i][j] = min(dp[i][j], dp[i-1][j] + grid[i][j]);
            if(j > 0) dp[i][j] = min(dp[i][j], dp[i][j-1] + grid[i][j]);
        }
    }

    vector<int> path;
    int i = grid.size() - 1, j = grid[0].size() - 1;
    path.push_back(grid[i][j]);
    while(i > 0 || j > 0){
        if(i > 0 && dp[i][j] - grid[i][j] == dp[i-1][j]){
            i--;
        } else{
            j--;
        }
        path.push_back(grid[i][j]);
    }

    reverse(path.begin(), path.end());
    return path;
}