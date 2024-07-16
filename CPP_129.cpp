bool issame(vector<int> a, vector<int> b) {
    return a[0] == b[0] && a[1] == b[1];
}

vector<int> minPath(vector<vector<int>> grid, int k);

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    int m = grid[0].size();
    
    vector<vector<int>> dp(n, vector<int>(m, INT_MAX));
    dp[0][0] = 0;
    
    queue<vector<int>> q;
    q.push({0, 0});
    
    vector<vector<int>> dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    
    while (!q.empty()) {
        auto cur = q.front();
        q.pop();
        
        for (auto dir : dirs) {
            int x = cur[0] + dir[0];
            int y = cur[1] + dir[1];
            
            if (x >= 0 && x < n && y >= 0 && y < m) {
                int cost = issame(grid[cur[0]][cur[1]], grid[x][y]) ? 0 : 1;
                
                if (dp[x][y] > dp[cur[0]][cur[1]] + cost) {
                    dp[x][y] = dp[cur[0]][cur[1]] + cost;
                    q.push({x, y});
                }
            }
        }
    }
    
    return dp[n - 1][m - 1] <= k ? vector<int>{dp[n - 1][m - 1], k - dp[n - 1][m - 1]} : vector<int>{-1};
}

int main() {
    vector<vector<int>> grid = {{0, 0, 1}, {0, 0, 1}, {1, 1, 0}};
    int k = 1;
    
    vector<int> result = minPath(grid, k);
    assert(result == vector<int>{2, -1});
    
    return 0;
}