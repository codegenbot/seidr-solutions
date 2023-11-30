vector<int> minPath(vector<vector<int>> grid, int k){
    int N = grid.size();
    vector<int> path;
    int currentRow = 0;
    int currentCol = 0;
    int step = 0;

    // Add the value of the starting cell to the path
    path.push_back(grid[currentRow][currentCol]);
    step++;

    while(step < k){
        // Check if there is a cell below the current cell
        if(currentRow + 1 < N){
            currentRow++;
        }
        // If there is no cell below, move to the cell on the right
        else{
            currentCol++;
        }
        // Add the value of the current cell to the path
        path.push_back(grid[currentRow][currentCol]);
        step++;
    }

    return path;
}