#include <vector>
#include <algorithm>

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> path;
    vector<vector<int>> visited(n, vector<int>(n, 0));
    
    auto cmp = [](const pair<int, int>& a, const pair<int, int>& b) {
        return grid[a.first][a.second] < grid[b.first][b.second];
    };
    
    vector<pair<int, int>> cells;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cells.push_back({i, j});
        }
    }
    
    sort(cells.begin(), cells.end(), cmp);
    
    pair<int, int> start = cells[0];
    path.push_back(grid[start.first][start.second]);
    visited[start.first][start.second] = 1;
    
    while (path.size() < k) {
        pair<int, int> current = start;
        for (const pair<int, int>& dir : vector<pair<int, int>>{{0, 1}, {0, -1}, {1, 0}, {-1, 0}}) {
            pair<int, int> next = {current.first + dir.first, current.second + dir.second};
            if (next.first >= 0 && next.first < n && next.second >= 0 && next.second < n && !visited[next.first][next.second]) {
                path.push_back(grid[next.first][next.second]);
                visited[next.first][next.second] = 1;
                break;
            }
        }
    }
    
    return path;
}