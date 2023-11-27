#include <vector>
#include <algorithm>
#include <climits>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()) {
        return false;
    }
    
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

void dfs(std::vector<std::vector<int>>& grid, int x, int y, int k, std::vector<int>& path){
    int n = grid.size();
    
    if(x < 0 || y < 0 || x >= n || y >= n || k < 0 || grid[x][y] == -1) {
        return;
    }
    
    path.push_back(grid[x][y]);
    
    if(x == n-1 && y == n-1) {
        return;
    }
    
    int temp = grid[x][y];
    grid[x][y] = -1;
    
    dfs(grid, x+1, y, k-temp, path);
    
    if(path.empty() || path.back() != temp) {
        dfs(grid, x, y+1, k-temp, path);
    }
    
    grid[x][y] = temp;
    
    path.pop_back();
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