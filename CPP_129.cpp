vector<int> minPath(vector<vector<int>> grid, int k) {
    // Initialize variables
    int n = grid.size();
    int m = grid[0].size();
    int startX = 0;
    int startY = 0;
    vector<int> path;
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    // Find the minimum value on the grid
    int minValue = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            minValue = min(minValue, grid[i][j]);
        }
    }

    // Find the starting position for the minimum path
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == minValue) {
                startX = i;
                startY = j;
                break;
            }
        }
    }

    // Perform DFS to find the minimum path
    dfs(grid, startX, startY, k, path, visited);

    return path;
}