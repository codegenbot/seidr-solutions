#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<pair<int, int>>> graph(n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i > 0) graph[i][j].emplace_back(grid[i - 1][j], i - 1, j);
            if (i < n - 1) graph[i][j].emplace_back(grid[i + 1][j], i + 1, j);
            if (j > 0) graph[i][j].emplace_back(grid[i][j - 1], i, j - 1);
            if (j < n - 1) graph[i][j]..emplace_back(grid[i][j + 1], i, j + 1);
        }
    }

    vector<int> res;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq({{0, 0}});
    vector<vector<bool>> visited(n, vector<bool>(n));
    while (!pq.empty()) {
        auto [val, x, y] = pq.top(); pq.pop();
        res.push_back(val);
        if (res.size() == k) break;
        for (auto &[v, nx, ny] : graph[x][y]) {
            if (visited[nx][ny]) continue;
            visited[nx][ny] = true;
            pq.emplace(v, nx, ny);
        }
    }

    return res;
}