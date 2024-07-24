vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    vector<pair<int, pair<int, int>>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!visited[i][j]) {
                pq.push({grid[i][j], {i, j}});
                visited[i][j] = true;
            }
        }
    }
    vector<int> path;
    while (!pq.empty() && k--) {
        int val = pq.top().first;
        pair<int, int> pos = pq.top().second;
        pq.pop();
        path.push_back(val);
        for (auto& dir : directions) {
            int ni = pos.first + dir.first;
            int nj = pos.second + dir.second;
            if (ni >= 0 && ni < n && nj >= 0 && nj < n && !visited[ni][nj]) {
                pq.push({grid[ni][nj], {ni, nj}});
                visited[ni][nj] = true;
            }
        }
    }
    return path;
}