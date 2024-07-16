#include <algorithm>

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> path;
    vector<vector<int>> visited(n, vector<int>(n, 0));
    
    auto cmp = [&](const pair<int, int>& a, const pair<int, int>& b) {
        return grid[a.first][a.second] < grid[b.first][b.second];
    };
    
    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    
    pair<int, int> start;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == 1) {
                start = {i, j};
                break;
            }
        }
    }
    
    path.push_back(grid[start.first][start.second]);
    visited[start.first][start.second] = 1;
    
    while (path.size() < k) {
        vector<pair<int, int>> neighbors;
        for (const auto& dir : directions) {
            int x = start.first + dir.first;
            int y = start.second + dir.second;
            if (x >= 0 && x < n && y >= 0 && y < n && !visited[x][y]) {
                neighbors.push_back({x, y});
            }
        }
        
        if (neighbors.empty()) {
            break;
        }
        
        sort(neighbors.begin(), neighbors.end(), cmp);
        start = neighbors[0];
        path.push_back(grid[start.first][start.second]);
        visited[start.first][start.second] = 1;
    }
    
    return path;
}