int n = grid.size();
    vector<int> result;
    int currRow = 0, currCol = 0;
    result.push_back(grid[currRow][currCol]);
    for (int i = 1; i < k; ++i) {
        if ((currRow + currCol) % 2 == 0) {
            if (currRow + 1 < n) {
                currRow++;
            } else {
                currCol++;
            }
        } else {
            if (currCol + 1 < n) {
                currCol++;
            } else {
                currRow++;
            }
        }
        result.push_back(grid[currRow][currCol]);
    }
    return result;
}