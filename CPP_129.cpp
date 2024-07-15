#include <vector>
#include <queue>
#include <climits>
#include <cassert>

namespace custom {
    bool issame(const std::vector<int>& a, const std::vector<int>& b) {
        return a[0] == b[0];
    }
}

std::vector<std::pair<int, int>> minPath(std::vector<std::vector<int>> grid, int k) {
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
                int cost = custom::issame(grid[curr[0]], grid[x]) ? 0 : 1;
                
                if (dp[x][y] > dp[curr[0]][curr[1]] + cost) {
                    dp[x][y] = dp[curr[0]][curr[1]] + cost;
                    q.push({x, y});
                }
            }
        }
    }
    
    std::vector<std::pair<int, int>> path;
    int x = n - 1, y = m - 1;
    while (x != 0 || y != 0) {
        path.push_back({x, y});
        for (auto dir : dirs) {
            int nx = x - dir[0];
            int ny = y - dir[1];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && dp[nx][ny] == dp[x][y] - 1) {
                x = nx;
                y = ny;
                break;
            }
        }
    }
    path.push_back({0, 0});
    std::reverse(path.begin(), path.end());
    
    return dp[n - 1][m - 1] > k ? std::vector<std::pair<int, int>>{{-1, -1}} : path;
}

int main() {
    assert(minPath({{1, 3}, {3, 2}}, 10) == std::vector<std::pair<int, int>>{{0, 0}, {1, 0}, {1, 1}});
    return 0;
}