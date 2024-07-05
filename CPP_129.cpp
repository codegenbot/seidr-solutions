#include <vector>
#include <queue>
#include <tuple>
#include <algorithm>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int N = grid.size();
    vector<vector<vector<int>>> dp(N, vector<vector<int>>(N, vector<int>(k + 1, INT_MAX)));
    priority_queue<tuple<int, int, int, vector<int>>, vector<tuple<int, int, int, vector<int>>>, greater<>> pq;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            pq.push({grid[i][j], i, j, {grid[i][j]}});
            dp[i][j][1] = grid[i][j];
        }
    }

    vector<int> directions = {-1, 0, 1, 0, -1};

    while (!pq.empty()) {
        auto [val, x, y, path] = pq.top();
        pq.pop();

        if (path.size() == k) {
            return path;
        }

        for (int d = 0; d < 4; ++d) {
            int nx = x + directions[d];
            int ny = y + directions[d + 1];

            if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
                vector<int> newPath = path;
                newPath.push_back(grid[nx][ny]);

                if (newPath.size() <= k && dp[nx][ny][newPath.size()] > grid[nx][ny]) {
                    dp[nx][ny][newPath.size()] = grid[nx][ny];
                    pq.push({grid[nx][ny], nx, ny, newPath});
                }
            }
        }
    }

    return {};
}