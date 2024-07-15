#include <vector>
#include <queue>
#include <climits>
#include <cassert>

namespace std {
    bool issame(const std::vector<int>& a, const std::vector<int>& b){
        return a[1] == b[1];
    }
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k){
    int n = grid.size();
    int m = grid[0].size();
    std::vector<std::vector<int>> dp(n, std::vector<int>(m, INT_MAX));
    dp[0][0] = 0;
    
    std::vector<std::vector<int>> dirs = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    
    std::queue<std::vector<int>> q;
    q.push({0, 0});
    
    while (!q.empty()) {
        std::vector<int> curr = q.front();
        q.pop();
        
        for (auto dir : dirs) {
            int x = curr[0] + dir[0];
            int y = curr[1] + dir[1];
            
            if (x >= 0 && x < n && y >= 0 && y < m) {
                int cost = std::issame(grid[curr[0]], grid[x]) ? 0 : 1;
                
                if (dp[x][y] > dp[curr[0]][curr[1]] + cost) {
                    dp[x][y] = dp[curr[0]][curr[1]] + cost;
                    q.push({x, y});
                }
            }
        }
    }
    
    return dp[n - 1][m - 1] > k ? std::vector<int>{-1, -1} : std::vector<int>{n - 1, m - 1};
}

int main() {
    assert(minPath({{1, 3}, {3, 2}}, 10) == std::vector<int>{1, 3});
    return 0;
}