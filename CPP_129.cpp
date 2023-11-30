#include <vector>
#include <climits>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
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

void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, vector<int>& path, int row, int col, int k);

vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    
    // Find the minimum value in the grid
    int minValue = INT_MAX;
    int minRow, minCol;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(grid[i][j] < minValue){
                minValue = grid[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }
    
    // DFS to find the minimum path
    dfs(grid, visited, path, minRow, minCol, k);
    
    return path;
}

void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, vector<int>& path, int row, int col, int k){
    int n = grid.size();
    if(row < 0 || row >= n || col < 0 || col >= n || visited[row][col]){
        return;
    }
    
    visited[row][col] = true;
    path.push_back(grid[row][col]);
    
    // Check if the path length is equal to k
    if(path.size() == k){
        return;
    }
    
    // Check the neighbors
    dfs(grid, visited, path, row-1, col, k);
    dfs(grid, visited, path, row+1, col, k);
    dfs(grid, visited, path, row, col-1, k);
    dfs(grid, visited, path, row, col+1, k);
}

int main(){
    assert(issame(minPath({{1, 3}, {3, 2}}, 10) , {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    
    return 0;
}