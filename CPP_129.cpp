#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>>& grid, int k) {
    int N = grid.size();
    vector<vector<int>> dp(N, vector<int>(N));
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            dp[i][j] = -1;

    queue<pair<pair<int, int>, int>> q;
    dp[0][0] = grid[0][0];
    q.push({{0, 0}, grid[0][0]});
    int minPathVal = grid[0][0];

    while (!q.empty()) {
        pair<pair<int, int>, int> cur = q.front();
        q.pop();

        int x = cur.first.first, y = cur.first.second;
        int val = cur.second;

        if (k == 0) break;

        for (int dx : {-1, 0, 1}) {
            int nx = x + dx;
            if (nx < 0 || nx >= N) continue;

            for (int dy : {-1, 0, 1}) {
                int ny = y + dy;
                if (ny < 0 || ny >= N) continue;

                if (dx == 0 && dy != 0) continue; // horizontal or vertical
                if (dx != 0 && dy != 0) continue; // diagonal

                if (dp[nx][ny] == -1) {
                    dp[nx][ny] = val;
                    q.push({{nx, ny}, grid[nx][ny]});
                }
            }
        }

        --k;
    }

    vector<int> res;
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j) {
            if (dp[i][j] == -1) continue;
            res.push_back(dp[i][j]);
        }

    return res;
}

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;
    vector<int> result = minPath(grid, k);
    for (int i : result) cout << i << " ";
    return 0;
}