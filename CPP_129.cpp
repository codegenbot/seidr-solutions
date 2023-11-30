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
        k--;
        if (curRow < n - 1 && !visited[curRow + 1][curCol]) {
            curRow++;
        } else if (curCol < m - 1 && !visited[curRow][curCol + 1]) {
            curCol++;
        } else {
            break;
        }
    }
    return path;
}