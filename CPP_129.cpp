bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> result;
    
    if(k < 0) return result;
    
    vector<vector<int>> dp(grid.size(), vector<int>(grid[0].size(), INT_MAX));
    dp[0][0] = grid[0][0];
    
    for(int i=0; i<grid.size(); i++){
        for(int j=0; j<grid[0].size(); j++){
            if(i > 0) dp[i][j] = min(dp[i][j], dp[i-1][j] + grid[i][j]);
            if(j > 0) dp[i][j] = min(dp[i][j], dp[i][j-1] + grid[i][j]);
        }
    }
    
    int i = grid.size() - 1, j = grid[0].size() - 1;
    while(i >= 0 && j >= 0){
        result.push_back(grid[i][j]);
        if(i == 0 && j == 0) break;
        if(i > 0 && dp[i][j] == dp[i-1][j] + grid[i][j]){
            i--;
        } else {
            j--;
        }
    }
    
    reverse(result.begin(), result.end());
    
    return result;
}