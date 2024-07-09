vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    vector<pair<int, int>> dir = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
    vector<int> res;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == 1) {
                pq.push({k, {i, j}});
                break;
            }
        }
    }

    while (!pq.empty()) {
        auto [dist, pos] = pq.top();
        pq.pop();

        if (dist > 0) {
            res.push_back(grid[pos.first][pos.second]);
            visited[pos.first][pos.second] = true;

            for (auto& d : dir) {
                int ni = pos.first + d.first;
                int nj = pos.second + d.second;
                if (ni >= 0 && ni < n && nj >= 0 && nj < n && !visited[ni][nj]) {
                    pq.push({dist - 1, {ni, nj}});
                }
            }
        }

        if (res.size() == k) break;
    }

    return res;
}