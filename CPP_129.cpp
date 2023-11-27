#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

void dfs(vector<vector<int>> grid, int x, int y, int k, vector<int>& path, vector<vector<bool>>& visited) {
    int n = grid.size();
    if(x < 0 || x >= n || y < 0 || y >= n || visited[x][y] || grid[x][y] > k) {
        return;
    }

    visited[x][y] = true;
    path.push_back(grid[x][y]);

    if(x == n-1 && y == n-1) {
        return;
    }

    dfs(grid, x+1, y, k, path, visited);
    dfs(grid, x, y+1, k, path, visited);
    dfs(grid, x-1, y, k, path, visited);
    dfs(grid, x, y-1, k, path, visited);

    if(path.size() > 2) {
        path.pop_back();
    }
}

vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    vector<vector<bool>> visited(n, vector<bool>(n, false));

    // Find the minimum value in the grid
    int minValue = grid[0][0];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            minValue = min(minValue, grid[i][j]);
        }
    }

    // Find the starting cell with the minimum value
    int startX, startY;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(grid[i][j] == minValue){
                startX = i;
                startY = j;
                break;
            }
        }
    }

    // Perform DFS to find the minimum path
    dfs(grid, startX, startY, k, path, visited);

    return path;
}

int main(){
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));

    return 0;
}