vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    vector<int> res;
    function<void(int, int)> dfs = [&](int x, int y) {
        if (k == 0) return;
        for (int dx = -1; dx <= 1; ++dx)
            for (int dy = -1; dy <= 1; ++dy)
                if (abs(dx) + abs(dy) == 1 && 0 <= x + dx < n && 0 <= y + dy < n) {
                    int val = grid[x + dx][y + dy];
                    if (!visited[x + dx][y + dy] && find(res.begin(), res.end(), val) == res.end()) {
                        visited[x + dx][y + dy] = true;
                        res.push_back(val);
                        dfs(x + dx, y + dy);
                        res.pop_back();
                        visited[x + dx][y + dy] = false;
                    }
                }
        if (k > 0) {
            sort(res.begin(), res.end());
            while (next_permutation(res.begin(), res.end())) {
                bool ok = true;
                for (int i = 1; i < k; ++i)
                    if (res[i] == res[0]) {
                        ok = false;
                        break;
                    }
                if (ok) return;
            }
        }
    };
    dfs(0, 0);
    return res;
}