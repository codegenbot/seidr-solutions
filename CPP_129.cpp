#include <vector>
#include <algorithm>
#include <climits>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

void dfs(std::vector<std::vector<int>>& grid, int x, int y, int k, std::vector<int>& path){
    if(x < 0 || x >= grid.size() || y < 0 || y >= grid.size()){
        return;
    }
    
    int currentVal = grid[x][y];
    
    if(currentVal > k){
        return;
    }
    
    path.push_back(currentVal);
    
    grid[x][y] = INT_MAX;
    
    dfs(grid, x - 1, y, k, path); // go left
    dfs(grid, x + 1, y, k, path); // go right
    dfs(grid, x, y - 1, k, path); // go up
    dfs(grid, x, y + 1, k, path); // go down
    
    grid[x][y] = currentVal;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k){
    int n = grid.size();
    std::vector<int> path;
    
    // Find the minimum value in the grid
    int minVal = INT_MAX;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            minVal = std::min(minVal, grid[i][j]);
        }
    }
    
    // Find the starting cell with the minimum value
    int startX, startY;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(grid[i][j] == minVal){
                startX = i;
                startY = j;
                break;
            }
        }
    }
    
    // Perform a depth-first search to find the minimum path
    dfs(grid, startX, startY, k, path);
    
    return path;
}

int main() {
    assert(issame(std::vector<int>({1, 3, 1, 3, 1, 3, 1, 3, 1, 3}), minPath(std::vector<std::vector<int>>({{1, 3}, {3, 2}}), 10)));
    
    return 0;
}