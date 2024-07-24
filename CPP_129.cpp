```cpp
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> minPath(vector<vector<int>>& grid, int k){
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 || j == 0) dp[i][j] = grid[i][j];
            else{
                int minVal = INT_MAX;
                if(i > 0) minVal = min(minVal, dp[i-1][j]);
                if(j > 0) minVal = min(minVal, dp[i][j-1]);
                dp[i][j] = grid[i][j] + minVal;
            }
        }
    }
    
    int minVal = INT_MAX;
    for(int i = 0; i < n; i++){
        if(i > 0) minVal = min(minVal, dp[n-1][i]);
    }
    
    vector<int> path;
    int x = n - 1, y = minVal == dp[n-1][minVal] ? 0 : minVal;
    for(int i = 0; i < k; i++){
        path.push_back(grid[x][y]);
        if(y > 0) x--;
        else y--;
    }
    
    return path;
}