vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    int row = 0, col = 0;
    
    // Start the path from the cell with value 1
    int startValue = 1;
    while (startValue <= n * n) {
        path.push_back(grid[row][col]);
        
        // Move to the next cell
        if (col < n - 1 && (row == 0 || grid[row - 1][col] > grid[row][col + 1])) {
            col++;
        } else {
            row++;
        }
        
        startValue++;
    }
    
    // Repeat the path to make it of length k
    while (path.size() < k) {
        path.push_back(path[path.size() - 1]);
    }
    
    return path;
}