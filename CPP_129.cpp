bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> result;
    if(grid.empty() || grid[0].empty()){
        return result;
    }
    
    int n = grid.size(), m = grid[0].size();
    
    for(int i = 0; i < k; ++i){
        vector<vector<int>> dp(n, vector<int>(m, INT_MAX));
        dp[0][0] = grid[0][0];
        
        for(int r = 0; r < n; ++r){
            for(int c = 0; c < m; ++c){
                if(r > 0){
                    dp[r][c] = min(dp[r][c], dp[r-1][c] + grid[r][c]);
                }
                if(c > 0){
                    dp[r][c] = min(dp[r][c], dp[r][c-1] + grid[r][c]);
                }
            }
        }
        
        vector<int> path;
        int r = n - 1, c = m - 1;
        
        while(r > 0 || c > 0){
            path.push_back(grid[r][c]);
            if(r > 0 && dp[r][c] == dp[r-1][c] + grid[r][c]){
                --r;
            } else {
                --c;
            }
        }
        path.push_back(grid[0][0]);
        
        reverse(path.begin(), path.end());
        grid[0][0] = path[0];
        result.insert(result.end(), path.begin() + 1, path.end());
    }
    
    return result;
}