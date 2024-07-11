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
                vector<int> temp;
                dfs(grid, visited, i, j, k, temp);
                if (temp.size() == k) {
                    res = temp;
                    break;
                }
            }
        }
        if (res.size() == k) break;
    }
    return res;
}

void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int i, int j, int k, vector<int>& res) {
    if (k == 0) return;
    res.push_back(grid[i][j]);
    visited[i][j] = true;
    for (int x = -1; x <= 1; x++) {
        for (int y = -1; y <= 1; y++) {
            int ni = i + x, nj = j + y;
            if (ni >= 0 && ni < grid.size() && nj >= 0 && nj < grid.size()
                && !visited[ni][nj]) {
                dfs(grid, visited, ni, nj, k - 1, res);
                if (res.size() == k) return;
            }
        }
    }
    visited[i][j] = false;
    res.pop_back();
}