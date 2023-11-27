vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    int m = grid[0].size();
    vector<int> path;
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    int curRow = 0;
    int curCol = 0;
    while (k > 0) {
        path.push_back(grid[curRow][curCol]);
        visited[curRow][curCol] = true;
        int nextRow = curRow;
        int nextCol = curCol;
        if (curCol + 1 < m && !visited[curRow][curCol + 1]) {
            nextCol = curCol + 1;
        } else if (curRow + 1 < n && !visited[curRow + 1][curCol]) {
            nextRow = curRow + 1;
        } else if (curCol - 1 >= 0 && !visited[curRow][curCol - 1]) {
            nextCol = curCol - 1;
        } else if (curRow - 1 >= 0 && !visited[curRow - 1][curCol]) {
            nextRow = curRow - 1;
        }
        curRow = nextRow;
        curCol = nextCol;
        k--;
    }
    return path;
}