vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    vector<vector<int>> directions({{-1, 0}, {1, 0}, {0, -1}, {0, 1}});
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> queue;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!visited[i][j]) {
                queue.push({grid[i][j], {i, j}});
                visited[i][j] = true;
            }
        }
    }
    vector<int> path;
    while (k--) {
        int value, x, y;
        tie(value, pair<int, int>) = queue.top();
        queue.pop();
        path.push_back(value);
        for (auto& dir : directions) {
            x += dir[0];
            y += dir[1];
            if (x >= 0 && x < n && y >= 0 && y < n && !visited[x][y]) {
                queue.push({grid[x][y], {x, y}});
                visited[x][y] = true;
            }
        }
    }
    return path;
}