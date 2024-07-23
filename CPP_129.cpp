#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<pair<int, int>>> neighbors(n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i > 0) neighbors[i].emplace_back(grid[i-1][j], i-1, j);
            if (i < n-1) neighbors[i].emplace_back(grid[i+1][j], i+1, j);
            if (j > 0) neighbors[i].emplace_back(grid[i][j-1], i, j-1);
            if (j < n-1) neighbors[i].emplace_back(grid[i][j+1], i, j+1);
        }
    }

    vector<int> res;
    queue<pair<vector<int>, int>> q; // {path, length}
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            q.push({{grid[i][j]}, 1});
        }
    }

    while (!q.empty()) {
        auto [path, len] = q.front(); q.pop();
        if (len == k) {
            return path;
        }
        for (auto& neighbor : neighbors[path.back()[0]]) {
            int val = neighbor.first;
            vector<int> newPath = path;
            newPath.push_back(val);
            q.push({newPath, len + 1});
        }
    }

    return {};
}

int main() {
    vector<vector<int>> grid1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "{";
    for (int val : minPath(grid1, 3)) {
        cout << val << " ";
    }
    cout << "}\n";

    vector<vector<int>> grid2 = {{5, 9, 3}, {4, 1, 6}, {7, 8, 2}};
    cout << "{";
    for (int val : minPath(grid2, 1)) {
        cout << val << " ";
    }
    cout << "}\n";

    return 0;
}