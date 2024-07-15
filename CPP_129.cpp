#include <vector>
#include <queue>
#include <climits>
#include <cassert>

vector<int> minPath(vector<vector<int>> grid, int k);

bool issame(vector<int> a, vector<int> b){
    return a[0] == b[0] && a[1] == b[1];
}

vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> dp(n, vector<int>(m, INT_MAX));
    dp[0][0] = 0;
    
    vector<vector<int>> dirs = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    
    queue<vector<int>> q;
    q.push({0, 0});
    
    while (!q.empty()) {
        vector<int> curr = q.front();
        q.pop();
        
        for (auto dir : dirs) {
            int x = curr[0] + dir[0];
            int y = curr[1] + dir[1];
            
            if (x >= 0 && x < n && y >= 0 && y < m) {
                int cost = issame(grid[curr[0]], grid[x]) ? 0 : 1;
                
                if (dp[x][y] > dp[curr[0]][curr[1]] + cost) {
                    dp[x][y] = dp[curr[0]][curr[1]] + cost;
                    q.push({x, y});
                }
            }
        }
    }
    
    return dp[n - 1][m - 1] > k ? vector<int>{-1, -1} : vector<int>{n - 1, m - 1};
}

int main() {
    assert(issame({1, 3}, {1, 3})); // Test issame function
    assert(minPath({{1, 3}, {3, 2}}, 10) == vector<int>{1, 3}); // Test minPath function
    return 0;
}