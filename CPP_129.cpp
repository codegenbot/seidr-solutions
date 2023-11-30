vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    int currentRow = 0;
    int currentCol = 0;
    
    while (k > 0) {
        path.push_back(grid[currentRow][currentCol]);
        visited[currentRow][currentCol] = true;
        k--;
        
        // Check if there is a neighbor cell that has not been visited
        if (currentRow + 1 < n && !visited[currentRow + 1][currentCol]) {
            currentRow++;
        } else if (currentCol + 1 < n && !visited[currentRow][currentCol + 1]) {
            currentCol++;
        } else {
            // If all neighbor cells have been visited, backtrack to the previous cell
            if (currentRow - 1 >= 0 && !visited[currentRow - 1][currentCol]) {
                currentRow--;
            } else if (currentCol - 1 >= 0 && !visited[currentRow][currentCol - 1]) {
                currentCol--;
            } else {
                // If there are no unvisited neighbor cells and we cannot backtrack, break the loop
                break;
            }
        }
    }
    
    return path;
}