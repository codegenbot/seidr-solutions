#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> path;
    
    // Find the starting cell with the minimum value
    int minVal = INT_MAX;
    int startRow, startCol;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] < minVal) {
                minVal = grid[i][j];
                startRow = i;
                startCol = j;
            }
        }
    }
    
    // Add the starting cell to the path
    path.push_back(minVal);
    
    // Move to the next cell k-1 times
    for (int i = 1; i < k; i++) {
        // Check the neighbors of the current cell
        int currRow = startRow;
        int currCol = startCol;
        int nextRow, nextCol;
        int minNeighbor = INT_MAX;
        
        // Check the top neighbor
        if (currRow > 0 && grid[currRow-1][currCol] < minNeighbor) {
            minNeighbor = grid[currRow-1][currCol];
            nextRow = currRow-1;
            nextCol = currCol;
        }
        
        // Check the bottom neighbor
        if (currRow < n-1 && grid[currRow+1][currCol] < minNeighbor) {
            minNeighbor = grid[currRow+1][currCol];
            nextRow = currRow+1;
            nextCol = currCol;
        }
        
        // Check the left neighbor
        if (currCol > 0 && grid[currRow][currCol-1] < minNeighbor) {
            minNeighbor = grid[currRow][currCol-1];
            nextRow = currRow;
            nextCol = currCol-1;
        }
        
        // Check the right neighbor
        if (currCol < n-1 && grid[currRow][currCol+1] < minNeighbor) {
            minNeighbor = grid[currRow][currCol+1];
            nextRow = currRow;
            nextCol = currCol+1;
        }
        
        // Add the minimum neighbor to the path
        path.push_back(minNeighbor);
        
        // Move to the next cell
        startRow = nextRow;
        startCol = nextCol;
    }
    
    return path;
}