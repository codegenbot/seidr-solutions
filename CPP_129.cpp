#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    vector<int> res;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (grid[i][j] == 1) {
                visited[i][j] = true;
                res.push_back(grid[i][j]);
            }
    int idx = 0;
    while (k > 0 && !res.empty()) {
        vector<int> temp;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j) {
                if (!visited[i][j] && res[idx] == grid[i][j]) {
                    visited[i][j] = true;
                    temp.push_back(grid[i][j]);
                }
            }
        while (!temp.empty()) {
            res.pop_back();
            res.insert(res.begin(), temp.back());
            temp.pop_back();
        }
        idx++;
        k--;
    }
    return res;
}

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;
    vector<int> result = minPath(grid, k);
    for (auto x : result)
        cout << x << " ";
    return 0;
}