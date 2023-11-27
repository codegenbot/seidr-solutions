vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> result;
    vector<vector<bool>> visited(n, vector<bool>(n, false));

    int row = 0;
    int col = 0;
    int count = 0;

    while (count < k) {
        visited[row][col] = true;
        result.push_back(grid[row][col]);
        count++;

        if (row + 1 < n && !visited[row + 1][col]) {
            row++;
        }
        else if (col + 1 < n && !visited[row][col + 1]) {
            col++;
        }
        else {
            break;
        }
    }

    return result;
}