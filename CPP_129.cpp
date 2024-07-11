#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    vector<int> res;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!visited[i][j]) {
                vector<int> path;
                dfs(grid, visited, i, j, k, path);
                res = minPath(res, path);
            }
        }
    }
    return res;
}

vector<int> minPath(vector<int> p1, vector<int> p2) {
    int n1 = p1.size();
    int n2 = p2.size();
    for (int i = 0; i < min(n1, n2); ++i) {
        if (p1[i] < p2[i]) return p1;
        else if (p1[i] > p2[i]) return p2;
    }
    return p1.size() <= p2.size() ? p1 : p2;
}

void dfs(vector<vector<int>> grid, vector<vector<bool>>& visited, int i, int j, int k, vector<int>& path) {
    if (k == 0) return;
    visited[i][j] = true;
    path.push_back(grid[i][j]);
    for (int x = -1; x <= 1; ++x) {
        for (int y = -1; y <= 1; ++y) {
            int ni = i + x, nj = j + y;
            if (ni >= 0 && ni < visited.size() && nj >= 0 && nj < visited[0].size() && !visited[ni][nj]) {
                dfs(grid, visited, ni, nj, k - 1, path);
                return;
            }
        }
    }
    visited[i][j] = false;
}

int main() {
    vector<vector<int>> grid = {{1,2,3}, {4,5,6}, {7,8,9}};
    int k = 3;
    vector<int> res = minPath(grid, k);
    for (int x : res) cout << x << " ";
    return 0;
}