vector<int> minPath(vector<vector<int>> grid, int k) {
    map<vector<int>, int> dist;
    queue<vector<int>> q;
    q.push({0, 0, 0});
    dist[{0, 0}] = 0;
    while (!q.empty()) {
        vector<int> curr = q.front();
        q.pop();
        int x = curr[0], y = curr[1], steps = curr[2];
        if (x == grid.size() - 1 && y == grid[0].size() - 1) {
            if (steps <= k)
                return true;
            continue;
        }
        vector<vector<int>> dirs = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        for (const auto &dir : dirs) {
            int nx = x + dir[0], ny = y + dir[1];
            if (nx >= 0 && nx < grid.size() && ny >= 0 && ny < grid[0].size()) {
                int newSteps = steps + grid[nx][ny];
                if (newSteps <= k && (dist.find({nx, ny}) == dist.end() || dist[{nx, ny}] > newSteps)) {
                    dist[{nx, ny}] = newSteps;
                    q.push({nx, ny, newSteps});
                }
            }
        }
    }
    return false;
}