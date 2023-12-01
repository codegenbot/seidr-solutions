#include <vector>
#include <climits>
#include <cassert>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k){
    std::vector<int> path;
    int n = grid.size();
    
    int minVal = grid[0][0];
    int startRow = 0;
    int startCol = 0;
    for(size_t i=0; i<grid.size(); i++){
        for(size_t j=0; j<grid.size(); j++){
            if(grid[i][j] < minVal){
                minVal = grid[i][j];
                startRow = i;
                startCol = j;
            }
        }
    }
    
    path.push_back(minVal);
    
    int currRow = startRow;
    int currCol = startCol;
    for(int step=1; step<k; step++){
        int minNeighborVal = INT_MAX;
        int nextRow = -1;
        int nextCol = -1;
        if(currRow > 0 && grid[currRow-1][currCol] < minNeighborVal){
            minNeighborVal = grid[currRow-1][currCol];
            nextRow = currRow-1;
            nextCol = currCol;
        }
        if(currRow < n-1 && grid[currRow+1][currCol] < minNeighborVal){
            minNeighborVal = grid[currRow+1][currCol];
            nextRow = currRow+1;
            nextCol = currCol;
        }
        if(currCol > 0 && grid[currRow][currCol-1] < minNeighborVal){
            minNeighborVal = grid[currRow][currCol-1];
            nextRow = currRow;
            nextCol = currCol-1;
        }
        if(currCol < n-1 && grid[currRow][currCol+1] < minNeighborVal){
            minNeighborVal = grid[currRow][currCol+1];
            nextRow = currRow;
            nextCol = currCol+1;
        }
        
        path.push_back(minNeighborVal);
        
        currRow = nextRow;
        currCol = nextCol;
    }
    
    return path;
}

int main() {
    assert(issame(minPath(std::vector<std::vector<int>>{{1, 3}, {3, 2}}, 10), std::vector<int>{1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    
    return 0;
}