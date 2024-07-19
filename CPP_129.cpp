#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> result;
    int n = grid.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] > n * n) return {};
            result.push_back(grid[i][j]);
        }
    }
    int start = 0;
    priority_queue<pair<int, int>> pq;
    pq.push({1, start});
    vector<bool> visited(n * n + 1, false);
    for (int i = 0; i < k; ++i) {
        pair<int, int> top = pq.top();
        pq.pop();
        int val = top.first;
        int idx = top.second;
        if (!visited[idx]) {
            result.push_back(val);
            visited[idx] = true;
            if (idx > 0 && !visited[idx - n]) {
                pq.push({grid[(idx - 1) / n][0], idx - 1});
            }
            if (idx < n * n && !visited[idx + 1]) {
                pq.push({grid[(idx + 1) / n][0], idx + 1});
            }
            if (idx % n > 0 && !visited[idx - 1]) {
                pq.push({grid[0][idx % n], idx - 1});
            }
            if (idx % n < n - 1 && !visited[idx + n]) {
                pq.push({grid[0][idx % n + n], idx + n});
            }
        }
    }
    return result;
}