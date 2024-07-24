#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    vector<int> res;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j]) {
                vector<int> path;
                dfs(grid, visited, i, j, k, path);
                res = minPath(res, path);
            }
        }
    }
    
    return res;
}

vector<int> minPath(vector<int> path1, vector<int> path2) {
    for (int i = 0; i < path1.size(); i++) {
        if (path1[i] > path2[i]) {
            return path1;
        } else if (path1[i] < path2[i]) {
            return path2;
        }
    }
    return path1;
}

void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int i, int j, int k, vector<int>& path) {
    if (k == 0) {
        return;
    }
    
    visited[i][j] = true;
    path.push_back(grid[i][j]);
    
    for (int x = -1; x <= 1; x++) {
        for (int y = -1; y <= 1; y++) {
            if (x == 0 && y == 0) continue;
            int ni = i + x, nj = j + y;
            
            if (ni >= 0 && ni < grid.size() && nj >= 0 && nj < grid[0].size() && !visited[ni][nj]) {
                dfs(grid, visited, ni, nj, k - 1, path);
                return;
            }
        }
    }
    
    visited[i][j] = false;
}