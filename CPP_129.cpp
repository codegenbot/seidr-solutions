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
            if (i > 0) {
                graph[i].push_back({grid[i-1][j], i-1, j});
            }
            if (i < n - 1) {
                graph[i].push_back({grid[i+1][j], i+1, j});
            }
            if (j > 0) {
                graph[i].push_back({grid[i][j-1], i, j-1});
            }
            if (j < n - 1) {
                graph[i].push_back({grid[i][j+1], i, j+1});
            }
        }
    }

    vector<int> res;
    priority_queue<pair<vector<int>, int>, vector<pair<vector<int>, int>>, greater<pair<vector<int>, int>>> pq;
    pq.push({vector<int>(), 0});

    while (!pq.empty()) {
        auto [path, step] = pq.top();
        pq.pop();

        if (step == k) {
            return path;
        }

        for (auto &[val, i, j] : graph[i]) {
            vector<int> newPath = path;
            newPath.push_back(val);
            pq.push({newPath, step + 1});
        }
    }

    return {};
}