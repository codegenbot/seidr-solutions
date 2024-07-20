#include <vector>
#include <algorithm>

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> path;
    vector<vector<int>> visited(n, vector<int>(n, 0));
    
    auto cmp = [&](const pair<int, int>& a, const pair<int, int>& b) {
        return grid[a.first][a.second] < grid[b.first][b.second];
    };
    
    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    
    auto isValid = [&](int x, int y) {
        return x >= 0 && x < n && y >= 0 && y < n;
    };
    
    function<void(int, int, int)> dfs = [&](int x, int y, int steps) {
        visited[x][y] = 1;
        path.push_back(grid[x][y]);
        
        if (steps == k) {
            return;
        }
        
        vector<pair<int, int>> neighbors;
        for (auto& dir : directions) {
            int nx = x + dir.first;
            int ny = y + dir.second;
            if (isValid(nx, ny) && !visited[nx][ny]) {
                neighbors.push_back({nx, ny});
            }
        }
        
        sort(neighbors.begin(), neighbors.end(), cmp);
        
        for (auto& neighbor : neighbors) {
            dfs(neighbor.first, neighbor.second, steps + 1);
            if (path.size() == k) {
                return;
            }
        }
        
        visited[x][y] = 0;
        path.pop_back();
    };
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            dfs(i, j, 1);
            if (path.size() == k) {
                return path;
            }
        }
    }
    
    return path;
}