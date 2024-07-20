#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k){
    int rows = grid.size();
    int cols = grid[0].size();
    
    std::vector<std::vector<int>> dp(rows, std::vector<int>(cols, k+1));
    dp[0][0] = grid[0][0];
    
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
            if(i > 0) dp[i][j] = std::min(dp[i][j], dp[i-1][j] + grid[i][j]);
            if(j > 0) dp[i][j] = std::min(dp[i][j], dp[i][j-1] + grid[i][j]);
        }
    }
    
    std::vector<int> path;
    int r = rows - 1, c = cols - 1;
    while(r >= 0 && c >= 0){
        path.push_back(grid[r][c]);
        if(r == 0 && c == 0) break;
        if(r > 0 && dp[r][c] == dp[r-1][c] + grid[r][c]) r--;
        else c--;
    }
    
    std::reverse(path.begin(), path.end());
    return path;
}

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    return 0;
}