#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> res;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (k == 1) {
                res.push_back(grid[i][j]);
                return res;
            }
            vector<int> curPath;
            int val = grid[i][j];
            curPath.push_back(val);
            vector<int> temp = dfs(grid, i, j, k - 1, val, &curPath);
            if (res.empty() || temp < res) {
                res = temp;
            }
        }
    }
    return res;
}

vector<int> dfs(vector<vector<int>>& grid, int x, int y, int k, int val, vector<int>* path) {
    (*path).push_back(val);
    if (k == 0) {
        return *path;
    }
    vector<int> res;
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            int nx = x + i;
            int ny = y + j;
            if(nx >= 0 && nx < grid.size() && ny >= 0 && ny < grid[0].size()) {
                vector<int> temp;
                bool found = true;
                for (int v : (*path)) {
                    if (find(grid[nx][ny], grid[nx][ny] + 1, v) != grid[nx][ny] + 1) {
                        found = false;
                        break;
                    }
                }
                if (found) {
                    vector<int> tempPath = dfs(grid, nx, ny, k - 1, val, path);
                    if (!tempPath.empty() && (res.empty() || tempPath < res)) {
                        res = tempPath;
                    }
                }
            }
        }
    }
    return res;
}

int main() {
    vector<vector<int>> grid = {{1,2,3}, {4,5,6}, {7,8,9}};
    int k = 3;
    vector<int> result = minPath(grid, k);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}