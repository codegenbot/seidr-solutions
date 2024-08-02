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
                graph[i].push_back({grid[i-1][j], -1});
            }
            if (j > 0) {
                graph[i].push_back({grid[i][j-1], -1});
            }
            if (i < n-1) {
                graph[i].push_back({grid[i+1][j], -1});
            }
            if (j < n-1) {
                graph[i].push_back({grid[i][j+1], -1});
            }
        }
    }

    vector<int> res;
    priority_queue<pair<vector<int>, int>> pq;
    pq.push({vector<int>(), 0});

    while (!pq.empty()) {
        auto [path, steps] = pq.top();
        pq.pop();

        if (steps == k) {
            return path;
        }

        for (auto &p : graph[path.size() % n]) {
            int val = p.first;
            int dir = p.second;
            vector<int> newPath = path;
            newPath.push_back(val);
            pq.push({newPath, steps + 1});
        }
    }

    return {};
}