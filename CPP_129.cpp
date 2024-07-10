#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> visited(n, vector<int>(n));
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>> > pq;
    vector<int> res;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (visited[i][j] == 0) {
                pq.push({grid[i][j], {i, j}});
                visited[i][j] = 1;
            }
        }
    }

    while (!pq.empty()) {
        int val = pq.top().first;
        pair<int, int> pos = pq.top().second;
        pq.pop();

        res.push_back(val);

        if (k > 0) {
            --k;

            // Explore neighbors
            vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
            for (auto dir : directions) {
                int x = pos.first + dir.first;
                int y = pos.second + dir.second;

                if (x >= 0 && x < n && y >= 0 && y < n && visited[x][y] == 0) {
                    pq.push({grid[x][y], {x, y}});
                    visited[x][y] = 1;
                }
            }
        } else {
            break;
        }
    }

    return res;
}