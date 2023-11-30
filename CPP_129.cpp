vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    int row = 0, col = 0;
    
    // Starting from the top-left cell
    path.push_back(grid[row][col]);
    
    // Move k-1 steps to find the minimum path
    for(int i = 1; i < k; i++){
        // Check if there is a neighbor cell to the right
        if(col < n-1){
            col++;
        }
        // If not, move to the next row
        else{
            row++;
        }
        path.push_back(grid[row][col]);
    }
    
    return path;
}