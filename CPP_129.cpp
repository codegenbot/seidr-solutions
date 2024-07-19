#include <vector>
#include <algorithm>
#include <cassert>
#include <functional>

using namespace std;

bool issame(vector<int>& a, vector<int>& b) {
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> path;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    
    function<void(int, int, int)> dfs = [&](int x, int y, int len) {
        visited[x][y] = true;
        path.push_back(grid[x][y]);
        
        if (len == k) {
            return;
        }
        
        vector<pair<int, int>> neighbors;
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        
        auto cmp = [&](const pair<int, int>& a, const pair<int, int>& b) {
            return grid[a.first][a.second] < grid[b.first][b.second];
        };
        
        auto isValid = [&](int x, int y) {
            return x >= 0 && x < n && y >= 0 && y < n;
        };
        
        for (auto& dir : directions) {
            int nx = x + dir.first;
            int ny = y + dir.second;
            if (isValid(nx, ny) && !visited[nx][ny]) {
                neighbors.push_back({nx, ny});
            }
        }
        
        sort(neighbors.begin(), neighbors.end(), cmp);
        
        for (auto& neighbor : neighbors) {
            dfs(neighbor.first, neighbor.second, len + 1);
            if (path.size() == k) {
                return;
            }
        }
        
        visited[x][y] = false;
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