vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    vector<vector<bool>> visited(n, vector<bool>(n));
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 || j==0){
                dp[i][j] = grid[i][j];
            }else{
                int minVal = INT_MAX;
                if(i>0) minVal = min(minVal, dp[i-1][j]);
                if(j>0) minVal = min(minVal, dp[i][j-1]);
                dp[i][j] = minVal + grid[i][j];
            }
        }
    }
    
    int minPathValue = INT_MAX;
    vector<int> minPath;
    for(int i=n-1; i>=0; i--){
        for(int j=n-1; j>=0; j--){
            if(i<n-1 && dp[i+1][j] == dp[i][j] + grid[i+1][j]) visited[i][j]=true;
            if(j<n-1 && dp[i][j+1] == dp[i][j] + grid[i][j+1]) visited[i][j]=true;
            
            if(i>0 && j>0 && !visited[i-1][j] && !visited[i][j-1]){
                minPath.push_back(grid[i][j]);
                i--;
                j--;
                k--;
                while(k>0){
                    if(i>0) i--;
                    else if(j>0) j--;
                    else break;
                    minPath.push_back(grid[i][j]);
                    k--;
                }
                return minPath;
            }
        }
    }
    
    return {};
}