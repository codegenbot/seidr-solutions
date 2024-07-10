#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    vector<int> path;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!visited[i][j]) {
                vector<int> tempPath;
                dfs(grid, visited, directions, i, j, k, &tempPath);
                path = minPath(path, tempPath);
            }
        }
    }
    
    return path;
}

vector<int> minPath(vector<int>& a, vector<int>& b) {
    int i = 0;
    while (i < a.size() && i < b.size()) {
        if (a[i] < b[i]) return a;
        else if (a[i] > b[i]) return b;
        ++i;
    }
    return a.size() <= b.size() ? a : b;
}

void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, vector<pair<int, int>>& directions, int i, int j, int k, vector<int>* path) {
    if (k == 0) {
        (*path).insert((*path).end(), grid[i].begin(), grid[i].end());
        return;
    }
    
    for (auto& dir : directions) {
        int ni = i + dir.first, nj = j + dir.second;
        if (ni >= 0 && ni < visited.size() && nj >= 0 && nj < visited[0].size()) {
            if (!visited[ni][nj]) {
                visited[ni][nj] = true;
                dfs(grid, visited, directions, ni, nj, k - 1, path);
                visited[ni][nj] = false;
            }
        }
    }
}

int main() {
    vector<vector<int>> grid = {{1,2,3}, {4,5,6}, {7,8,9}};
    int k = 3;
    vector<int> result = minPath(grid, k);
    
    for (auto val : result) {
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}