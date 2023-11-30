vector<int> minPath(vector<vector<int>> grid, int k) {
    int N = grid.size();
    vector<int> path;

    // Find the starting cell with the minimum value
    int minVal = INT_MAX;
    int startRow, startCol;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (grid[i][j] < minVal) {
                minVal = grid[i][j];
                startRow = i;
                startCol = j;
            }
        }
    }

    // Add the starting cell to the path
    path.push_back(minVal);

    // Move to the neighbor cell with the minimum value
    int currentRow = startRow;
    int currentCol = startCol;
    while (path.size() < k) {
        int minNeighbor = INT_MAX;
        int nextRow, nextCol;

        // Check the neighbor cells
        if (currentRow > 0 && grid[currentRow-1][currentCol] < minNeighbor) {
            minNeighbor = grid[currentRow-1][currentCol];
            nextRow = currentRow - 1;
            nextCol = currentCol;
        }
        if (currentRow < N-1 && grid[currentRow+1][currentCol] < minNeighbor) {
            minNeighbor = grid[currentRow+1][currentCol];
            nextRow = currentRow + 1;
            nextCol = currentCol;
        }
        if (currentCol > 0 && grid[currentRow][currentCol-1] < minNeighbor) {
            minNeighbor = grid[currentRow][currentCol-1];
            nextRow = currentRow;
            nextCol = currentCol - 1;
        }
        if (currentCol < N-1 && grid[currentRow][currentCol+1] < minNeighbor) {
            minNeighbor = grid[currentRow][currentCol+1];
            nextRow = currentRow;
            nextCol = currentCol + 1;
        }

        // Move to the neighbor cell with the minimum value
        currentRow = nextRow;
        currentCol = nextCol;
        path.push_back(minNeighbor);
    }

    return path;
}