#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> visited(n, vector<int>(n));
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>> > pq;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == 1) {
                pq.push({1, {i, j}});
                grid[i][j] = 2;
                visited[i][j] = 1;
            }
        }
    }

    vector<int> path;
    while (!pq.empty() && k--) {
        int val = pq.top().first;
        pair<int, int> pos = pq.top().second;
        pq.pop();
        path.push_back(val);
        for (int i = -1; i <= 1; ++i) {
            for (int j = -1; j <= 1; ++j) {
                if (abs(i) + abs(j) > 1 && i + j == 0)
                    continue;
                int ni = pos.first + i, nj = pos.second + j;
                if (ni >= 0 && ni < n && nj >= 0 && nj < n && grid[ni][nj] != 2
                        && visited[ni][nj] == 0) {
                    pq.push({val - 1, {ni, nj}});
                    visited[ni][nj] = 1;
                }
            }
        }
    }

    return path;
}