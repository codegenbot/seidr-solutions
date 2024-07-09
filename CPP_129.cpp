#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>> pq;
    vector<int> res;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!visited[i][j]) {
                pq.push({grid[i][j], {i, j}});
                visited[i][j] = true;
            }
        }
    }

    while (!pq.empty()) {
        int val = pq.top().first;
        int x = pq.top().second.first;
        int y = pq.top().second.second;

        res.push_back(val);
        for (int i = -1; i <= 1; ++i) {
            for (int j = -1; j <= 1; ++j) {
                if (abs(i) + abs(j) == 1 && x + i >= 0 && y + j >= 0 && x + i < n && y + j < n && !visited[x + i][y + j]) {
                    pq.push({grid[x + i][y + j], {x + i, y + j}});
                    visited[x + i][y + j] = true;
                }
            }
        }

        if (res.size() == k) break;

        pq.pop();
    }

    return res;
}