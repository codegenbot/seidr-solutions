#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>>
            pq({{grid[0][0], {0, 0}}});
    vector<vector<bool>> visited(n, vector<bool>(n));
    visited[0][0] = true;
    vector<int> result;

    while (k--) {
        pair<int, pair<int, int>> cur = pq.top();
        pq.pop();
        int val = cur.first;
        pair<int, int> pos = cur.second;

        if (pos.x == 0 && pos.y == n - 1) {
            return vector<int>(result.begin(), result.end());
        }

        for (int i = 0; i < 4; i++) {
            int nx = pos.x + directions[i][0];
            int ny = pos.y + directions[i][1];

            if (nx >= 0 && nx < n && ny >= 0 && ny < n && !visited[nx][ny]) {
                visited[nx][ny] = true;
                pq.push({grid[nx][ny], {nx, ny}});
                result.push_back(val);
            }
        }
    }

    return vector<int>();
}