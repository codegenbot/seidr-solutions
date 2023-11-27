vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size(); // number of rows
    vector<int> path; // vector to store the values of the minimum path
    
    // Initialize variables to keep track of the current position
    int row = 0;
    int col = 0;
    
    // Add the value of the starting cell to the path vector
    path.push_back(grid[row][col]);
    
    // Move to the next cell until the path has the length k
    while (path.size() < k) {
        // Check if it's possible to move right, and if the value of the
        // cell to the right is smaller than the current value
        if (col + 1 < n && grid[row][col + 1] < grid[row][col]) {
            col++; // move right
        }
        // Check if it's possible to move down, and if the value of the
        // cell below is smaller than the current value
        else if (row + 1 < n && grid[row + 1][col] < grid[row][col]) {
            row++; // move down
        }
        // Check if it's possible to move up, and if the value of the
        // cell above is smaller than the current value
        else if (row - 1 >= 0 && grid[row - 1][col] < grid[row][col]) {
            row--; // move up
        }
        // Check if it's possible to move left, and if the value of the
        // cell to the left is smaller than the current value
        else if (col - 1 >= 0 && grid[row][col - 1] < grid[row][col]) {
            col--; // move left
        }
        
        // Add the value of the cell to the path vector
        path.push_back(grid[row][col]);
    }
    
    return path;
}