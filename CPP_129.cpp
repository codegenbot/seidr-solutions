```cpp
bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
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