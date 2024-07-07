#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> visited(n, vector<int>(n));
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>> > pq;
    pq.push({0, {0, 0}});
    visited[0][0] = 1;

    vector<int> path;
    while (!pq.empty()) {
        int cost = pq.top().first;
        int x = pq.top().second.first;
        int y = pq.top().second.second;
        pq.pop();

        if (cost > k) break;

        if (x == n - 1 && y == n - 1) {
            while (cost > 0) {
                path.push_back(grid[x][y]);
                cost--;
                x -= (x > y);
                y += (x <= y);
            }
            reverse(path.begin(), path.end());
            return path;
        }

        for (int dx = -1; dx <= 1; dx++) {
            for (int dy = -1; dy <= 1; dy++) {
                int nx = x + dx, ny = y + dy;
                if (nx >= 0 && nx < n && ny >= 0 && ny < n && !visited[nx][ny]) {
                    visited[nx][ny] = 1;
                    pq.push({cost + grid[nx][ny], {nx, ny}});
                }
            }
        }
    }

    return {};
}

int main() {
    vector<vector<int>> grid = {{5, 9, 3}, {4, 1, 6}, {7, 8, 2}};
    int k = 1;
    vector<int> result = minPath(grid, k);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}