```
bool issame(int i1,int j1,int i2,int j2,vector<vector<int>>& grid){
    int n = grid.size();
    for(int x = min(i1,i2);x<=max(i1,i2);x++){
        for(int y = min(j1,j2);y<=max(j1,j2);y++){
            if(grid[x][y] != 0) return false;
        }
    }
    return true;
}

vector<int> minPath(vector<vector<int>>& grid, int k){
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 && j==0) dp[i][j] = grid[i][j];
            else{
                int val = INT_MAX;
                if(i>0) val = min(val, dp[i-1][j]);
                if(j>0) val = min(val, dp[i][j-1]);
                dp[i][j] = val + grid[i][j];
            }
        }
    }
    vector<int> res;
    int i = n-1, j = n-1;
    for(int l=0; l<k; l++){
        res.push_back(grid[i][j]);
        if(i>0 && dp[i-1][j] < dp[i][j-1]) i--;
        else j--;
    }
    reverse(res.begin(), res.end());
    return res;
}