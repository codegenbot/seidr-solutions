#include <vector>
#include <algorithm>
#include <climits>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k){
    std::vector<int> result;
    int n = grid.size();
    if(n == 0) return result;
    
    std::vector<std::vector<int>> dp(n, std::vector<int>(n, INT_MAX));
    dp[0][0] = grid[0][0];
    
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(i > 0) dp[i][j] = std::min(dp[i][j], dp[i-1][j] + grid[i][j]);
            if(j > 0) dp[i][j] = std::min(dp[i][j], dp[i][j-1] + grid[i][j]);
        }
    }
    
    int x = n-1, y = n-1;
    result.push_back(grid[x][y]);
    
    while(x > 0 || y > 0){
        if(x > 0 && dp[x][y] - grid[x][y] == dp[x-1][y]){
            x--;
        } else {
            y--;
        }
        result.push_back(grid[x][y]);
    }
    
    std::reverse(result.begin(), result.end());
    
    return result;
}