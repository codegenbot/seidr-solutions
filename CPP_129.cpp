vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> path;
    vector<vector<bool>> visited(n, vector<bool>(n, false));

    // Helper function to check if a cell is valid and not visited
    auto isValid = [&](int x, int y) {
        return x >= 0 && x < n && y >= 0 && y < n && !visited[x][y];
    };

    // Helper function to get neighbors of a cell
    auto getNeighbors = [&](int x, int y) {
        vector<pair<int, int>> neighbors;
        if (isValid(x - 1, y)) neighbors.push_back({x - 1, y});
        if (isValid(x + 1, y)) neighbors.push_back({x + 1, y});
        if (isValid(x, y - 1)) neighbors.push_back({x, y - 1});
        if (isValid(x, y + 1)) neighbors.push_back({x, y + 1});
        return neighbors;
    };

    // DFS function to find the minimum path
    function<bool(int, int)> dfs = [&](int x, int y) {
        visited[x][y] = true;
        path.push_back(grid[x][y]);

        if (path.size() == k) {
            return true;
        }

        vector<pair<int, int>> neighbors = getNeighbors(x, y);
        sort(neighbors.begin(), neighbors.end(), [&](pair<int, int> a, pair<int, int> b) {
            return grid[a.first][a.second] < grid[b.first][b.second];
        });

        for (auto neighbor : neighbors) {
            if (dfs(neighbor.first, neighbor.second)) {
                return true;
            }
        }

        visited[x][y] = false;
        path.pop_back();
        return false;
    };

    // Find the starting cell with the minimum value
    int startX = 0, startY = 0;
    int minValue = grid[startX][startY];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] < minValue) {
                startX = i;
                startY = j;
                minValue = grid[i][j];
            }
        }
    }

    dfs(startX, startY);

    return path;
}