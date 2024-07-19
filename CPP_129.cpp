#include <vector>
#include <deque>
#include <limits>

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k){
    int m = grid.size();
    int n = grid[0].size();
    
    std::vector<std::vector<int>> dp(m, std::vector<int>(n, std::numeric_limits<int>::max()));
    dp[0][0] = 0;
    
    std::deque<std::pair<int, int>> q;
    q.push_back({0, 0});
    
    std::vector<std::pair<int, int>> dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    
    while(!q.empty()){
        auto [i, j] = q.front();
        q.pop_front();
        
        for(const auto& dir : dirs){
            int ni = i + dir.first;
            int nj = j + dir.second;
            
            if(ni >= 0 && ni < m && nj >= 0 && nj < n){
                int cost = dp[i][j] + (grid[ni][nj] == k ? 1 : 0);
                
                if(cost < dp[ni][nj]){
                    dp[ni][nj] = cost;
                    q.push_back({ni, nj});
                }
            }
        }
    }
    
    return dp[m - 1][n - 1] == std::numeric_limits<int>::max() ? std::vector<int>() : std::vector<int>{m + n - 2 * dp[m - 1][n - 1]};
}