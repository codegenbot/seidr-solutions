#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n, 1e9));
    vector<vector<pair<int, int>>> adj(n, vector<pair<int, int>>(n));

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) {
            if (i > 0)
                adj[i][j].push_back({dp[i - 1][j], 1});
            if (i < n - 1)
                adj[i][j].push_back({dp[i + 1][j], 2});
            if (j > 0)
                adj[i][j].push_back({dp[i][j - 1], 3});
            if (j < n - 1)
                adj[i][j].push_back({dp[i][j + 1], 4});
        }

    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == 1) {
                pq.push({-grid[i][j], i * n + j});
                dp[i][j] = 0;
            }
        }
    }

    vector<int> res(k);
    for (int i = 0; i < k; ++i) {
        int val, x, y;
        pq.pop();
        val = -pq.top().first;
        tie(x, y) = make_pair(pq.top().second / n, pq.top().second % n);

        res[i] = val;

        for (auto &p : adj[x][y]) {
            int nx = p.first == 1 ? x - 1 : (p.first == 2 ? x + 1 : x);
            int ny = p.second == 3 ? y - 1 : (p.second == 4 ? y + 1 : y);

            if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                dp[nx][ny] = min(dp[nx][ny], dp[x][y] + val);
                pq.push({-dp[nx][ny], nx * n + ny});
            }
        }
    }

    return res;
}

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;
    vector<int> result = minPath(grid, k);
    for (auto &x : result) {
        cout << x << " ";
    }
    return 0;
}