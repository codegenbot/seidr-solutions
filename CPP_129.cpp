int n = grid.size();
    int m = grid[0].size();
    
    vector<vector<int>> dp(n, vector<int>(m, INT_MAX));
    dp[0][0] = grid[0][0];
    
    for(int i = 1; i < n; ++i){
        dp[i][0] = dp[i - 1][0] + grid[i][0];
    }
    
    for(int j = 1; j < m; ++j){
        dp[0][j] = dp[0][j - 1] + grid[0][j];
    }
    
    for(int i = 1; i < n; ++i){
        for(int j = 1; j < m; ++j){
            dp[i][j] = grid[i][j] + min(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    
    vector<int> path;
    int i = n - 1, j = m - 1;
    path.push_back(grid[i][j]);
    
    while(i > 0 || j > 0){
        if(i == 0){
            path.push_back(grid[i][j - 1]);
            j--;
        }
        else if(j == 0){
            path.push_back(grid[i - 1][j]);
            i--;
        }
        else{
            if(dp[i - 1][j] < dp[i][j - 1]){
                path.push_back(grid[i - 1][j]);
                i--;
            }
            else{
                path.push_back(grid[i][j - 1]);
                j--;
            }
        }
    }
    
    reverse(path.begin(), path.end());
    
    int sum = accumulate(path.begin(), path.end(), 0);
    return sum <= k;