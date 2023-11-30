vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> path;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    int curRow = 0, curCol = 0;
    while (k > 0) {
        path.push_back(grid[curRow][curCol]);
        visited[curRow][curCol] = true;
        k--;
        if (k == 0) {
            break;
        }
        // Find the next cell to move
        int nextRow = -1, nextCol = -1;
        for (int i = -1; i <= 1; i++) {
            for (int j = -1; j <= 1; j++) {
                if (i == 0 && j == 0) {
                    continue;
                }
                int newRow = curRow + i;
                int newCol = curCol + j;
                if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < n && !visited[newRow][newCol]) {
                    if (nextRow == -1 || grid[newRow][newCol] < grid[nextRow][nextCol]) {
                        nextRow = newRow;
                        nextCol = newCol;
                    }
                }
            }
        }
        curRow = nextRow;
        curCol = nextCol;
    }
    return path;
}