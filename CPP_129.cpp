vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<pair<int, pair<int, int>>>> neighbors(n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i > 0) neighbors[i].push_back({grid[i][j], make_pair(i-1, j)});
            if (i < n-1) neighbors[i].push_back({grid[i][j], make_pair(i+1, j)});
            if (j > 0) neighbors[i].push_back({grid[i][j], make_pair(i, j-1)});
            if (j < n-1) neighbors[i].push_back({grid[i][j], make_pair(i, j+1)});
        }
    }

    vector<int> res;
    queue<pair<vector<int>, int>> q; // {path, length}
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if ((i == n-1) && (j == n-1)) continue;
            q.push({{grid[i][j]}, 1});
        }
    }

    while (!q.empty()) {
        auto [path, len] = q.front(); q.pop();
        if (len > k) continue;
        int val = neighbors[path.back()][0].second.first;
        vector<int> newPath = path;
        newPath.push_back(val);
        q.push({newPath, len + 1});
    }

    while (!q.empty()) {
        auto [path, _] = q.front(); q.pop();
        res = path;
        break;
    }

    if (res.size() == 0) return {};
    vector<int> min_path;
    int target_cell = grid.back().back();
    for (int val : res) {
        if (val == target_cell) min_path.push_back(val);
    }
    return min_path;
}