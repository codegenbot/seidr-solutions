vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 || j==0) dp[i][j] = grid[i][j];
            else{
                int mn = INT_MAX;
                if(i>0) mn = min(mn, dp[i-1][j]);
                if(j>0) mn = min(mn, dp[i][j-1]);
                dp[i][j] = mn + grid[i][j];
            }
        }
    }
    
    vector<int> res;
    int i = n-1, j = n-1;
    while(k--){
        res.push_back(grid[i][j]);
        if(i>0 && j>0) break;
        else if(i==n-1) j--;
        else i--;
    }
    
    reverse(res.begin(), res.end());
    return res;
}