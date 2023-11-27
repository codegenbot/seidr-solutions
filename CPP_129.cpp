#include <vector>
#include <algorithm>
#include <climits>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

void dfs(std::vector<std::vector<int>>& grid, int x, int y, int k, std::vector<int>& path){
    // Check if the current cell is out of bounds or already visited
    if(x < 0 || x >= grid.size() || y < 0 || y >= grid.size() || grid[x][y] == -1){
        return;
    }
    
    // Add the current cell to the path
    path.push_back(grid[x][y]);
    
    // Mark the current cell as visited
    grid[x][y] = -1;
    
    // Check if the current cell is the destination
    if(x == k && y == k){
        return;
    }
    
    // Perform a depth-first search to explore the neighboring cells
    dfs(grid, x+1, y, k, path);  // Down
    dfs(grid, x, y+1, k, path);  // Right
    dfs(grid, x-1, y, k, path);  // Up
    dfs(grid, x, y-1, k, path);  // Left
    
    // Remove the current cell from the path
    path.pop_back();
    
    // Mark the current cell as unvisited
    grid[x][y] = path.back();
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