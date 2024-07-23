vector<vector<int>> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<pair<int, int>>> neighbors(n);
    for (int i = 0; i < n; ++i) {
        neighbors[i].resize(n);
        for (int j = 0; j < n; ++j) {
            if (i > 0) neighbors[i][j].push_back({make_pair(i-1, j), grid[i][j]});
            if (i < n-1) neighbors[i][j].push_back({make_pair(i+1, j), grid[i][j]});
            if (j > 0) neighbors[i][j].push_back({make_pair(i, j-1), grid[i][j]});
            if (j < n-1) neighbors[i][j].push_back({make_pair(i, j+1), grid[i][j]});
        }
    }

    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, cmp> q(cmp); 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            q.push({grid[i][j], make_pair(i, j)});
        }
    }

    vector<int> res;
    while (!q.empty()) {
        auto [sum, [i, j]] = q.top(); q.pop();
        if (k == 0) {
            return {sum};
        }
        for (auto& neighbor : neighbors[i][j]) {
            int ni = neighbor.first.first, nj = neighbor.first.second;
            int ns = sum - grid[i][j] + neighbor.second;
            k--;
            q.push({ns, make_pair(ni, nj)});
        }
    }

    return {};
}