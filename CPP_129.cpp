#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> visited(n, vector<int>(n));
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>> > pq;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 1) {
                pq.push({i * n + j, {i, j}});
                visited[i][j] = 1;
            }
        }
    }

    vector<int> path;
    while (!pq.empty()) {
        int val = pq.top().first;
        int x = pq.top().second.first;
        int y = pq.top().second.second;
        pq.pop();

        if (k > 0) {
            path.push_back(val % n * n + (x + 1));
            k--;
        }

        if (x < 1 || x >= n || y < 1 || y >= n || visited[x][y] == 0)
            continue;

        vector<pair<int, pair<int, int>>> neighbors = {{-1, {x - 1, y}}, {1, {x + 1, y}},
            {{0, {x, y - 1}}}, {{0, {x, y + 1}}}};

        for (auto &neighbor : neighbors) {
            int nx = neighbor.second.first;
            int ny = neighbor.second.second;

            if (nx >= 1 && nx < n && ny >= 1 && ny < n && !visited[nx][ny]) {
                pq.push({grid[nx][ny], {nx, ny}});
                visited[nx][ny] = 1;
            }
        }
    }

    return path;
}

int main() {
    vector<vector<int>> grid = {{1,2,3}, {4,5,6}, {7,8,9}};
    int k = 3;
    vector<int> result = minPath(grid, k);
    for (auto &val : result) {
        cout << val << " ";
    }
    return 0;
}