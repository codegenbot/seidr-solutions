vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    int row = 0, col = 0;
    
    // Find the starting cell with the minimum value
    int minVal = grid[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(grid[i][j] < minVal){
                minVal = grid[i][j];
                row = i;
                col = j;
            }
        }
    }
    
    // Add the minimum value to the path
    path.push_back(minVal);
    
    // Move to the next cell with the minimum value
    while(path.size() < k){
        int minValue = INT_MAX;
        int nextRow = row;
        int nextCol = col;
        
        // Check the neighbor cells
        if(row > 0 && grid[row-1][col] < minValue){
            minValue = grid[row-1][col];
            nextRow = row - 1;
            nextCol = col;
        }
        if(row < n-1 && grid[row+1][col] < minValue){
            minValue = grid[row+1][col];
            nextRow = row + 1;
            nextCol = col;
        }
        if(col > 0 && grid[row][col-1] < minValue){
            minValue = grid[row][col-1];
            nextRow = row;
            nextCol = col - 1;
        }
        if(col < n-1 && grid[row][col+1] < minValue){
            minValue = grid[row][col+1];
            nextRow = row;
            nextCol = col + 1;
        }
        
        // Move to the next cell with the minimum value
        row = nextRow;
        col = nextCol;
        
        // Add the minimum value to the path
        path.push_back(minValue);
    }
    
    return path;
}

int main(){
    vector<int> expected_path = {1, 3, 1, 3, 1, 3, 1, 3, 1, 3};
    
    vector<int> result = minPath({{1, 3}, {3, 2}}, 10);
    
    // Check if the result matches the expected path
    bool is_same = (result == expected_path);

    return 0;
}