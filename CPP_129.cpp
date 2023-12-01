#include <cassert>
#include <vector>
#include <climits>

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    
    // Find the starting cell with the minimum value
    int minVal = INT_MAX;
    int startRow, startCol;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(grid[i][j] < minVal){
                minVal = grid[i][j];
                startRow = i;
                startCol = j;
            }
        }
    }
    
    // Add the starting cell value to the path
    path.push_back(minVal);
    
    // Move to the neighbor cell with the minimum value in each step
    int currentRow = startRow;
    int currentCol = startCol;
    for(int step = 1; step < k; step++){
        int minValue = INT_MAX;
        int nextRow, nextCol;
        
        // Check the neighbor cells
        if(currentRow > 0 && grid[currentRow - 1][currentCol] < minValue){
            minValue = grid[currentRow - 1][currentCol];
            nextRow = currentRow - 1;
            nextCol = currentCol;
        }
        if(currentRow < n - 1 && grid[currentRow + 1][currentCol] < minValue){
            minValue = grid[currentRow + 1][currentCol];
            nextRow = currentRow + 1;
            nextCol = currentCol;
        }
        if(currentCol > 0 && grid[currentRow][currentCol - 1] < minValue){
            minValue = grid[currentRow][currentCol - 1];
            nextRow = currentRow;
            nextCol = currentCol - 1;
        }
        if(currentCol < n - 1 && grid[currentRow][currentCol + 1] < minValue){
            minValue = grid[currentRow][currentCol + 1];
            nextRow = currentRow;
            nextCol = currentCol + 1;
        }
        
        // Move to the neighbor cell with the minimum value
        currentRow = nextRow;
        currentCol = nextCol;
        
        // Add the value of the current cell to the path
        path.push_back(grid[currentRow][currentCol]);
    }
    
    return path;
}