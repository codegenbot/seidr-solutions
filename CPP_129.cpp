vector<int> minPath(vector<vector<int>> grid, int k){
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(k+1, INT_MAX)));
        
        dp[0][0][0] = 0;
        
        for(int steps=1; steps<=k; steps++){
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    dp[i][j][steps] = min(dp[i][j][steps], dp[i][j][steps-1]+1);
                    if(i > 0){
                        dp[i][j][steps] = min(dp[i][j][steps], dp[i-1][j][steps-1]+issame(grid[i][j], grid[i-1][j]));
                    }
                    if(j > 0){
                        dp[i][j][steps] = min(dp[i][j][steps], dp[i][j-1][steps-1]+issame(grid[i][j], grid[i][j-1]));
                    }
                }
            }
        }
        
        int ans = dp[n-1][m-1][k];
        return ans == INT_MAX ? -1 : ans;
    }
    
    int issame(int a, int b){
        return a == b ? 0 : 1;
    }

    int main() {
        // Your code here
        return 0;
    }