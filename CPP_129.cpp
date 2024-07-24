#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<pair<int, pair<int, int>>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    priority_queue<pair<int, vector<int>>, vector<pair<int, vector<int>>>, greater<pair<int, vector<int>>>> pq;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!visited[i][j]) {
                pq.push({grid[i][j], {grid[i][j]}});
                visited[i][j] = true;
            }
        }
    }
    vector<int> res;
    while (!pq.empty()) {
        int val = pq.top().first;
        vector<int> path = pq.top().second;
        pq.pop();
        if (path.size() == k) {
            return path;
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (!visited[i][j] && abs(i - path.back()) + abs(j - path.back()) == 1) {
                    visited[i][j] = true;
                    pq.push({val, path});
                }
            }
        }
    }
    return {};
}