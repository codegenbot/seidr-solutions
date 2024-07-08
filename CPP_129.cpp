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

vector<int> dfs(vector<vector<int>>& grid, int x, int int y, int k, int val, vector<int>* path) {
    (*path).push_back(val);
    if (k == 0) {
        return *path;
    }
    vector<int> res;
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            int nx = x + i;
            int ny = y + j;
            if (nx >= 0 && nx < grid.size() && ny >= 0 && ny < grid[0].size()) {
                vector<int>::iterator it = find((*path).begin(), (*path).end(), grid[nx][ny]);
                if (it == (*path).end()) {
                    vector<int> temp = dfs(grid, nx, ny, k - 1, grid[nx][ny], path);
                    if (!temp.empty() && (res.empty() || temp < res)) {
                        res = temp;
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