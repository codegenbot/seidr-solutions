#include <vector>
#include <queue>
#include <tuple>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int N = grid.size();
    vector<vector<vector<int>>> dp(N, vector<vector<int>>(N, vector<int>(k + 1, INT_MAX)));
    vector<vector<vector<vector<int>>>> paths(N, vector<vector<vector<int>>>(N, vector<vector<int>>(k + 1)));

    auto cmp = [](const tuple<int, int, int, vector<int>>& a, const tuple<int, int, int, vector<int>>& b) {
        return get<3>(a) > get<3>(b);
    };
    priority_queue<tuple<int, int, int, vector<int>>, vector<tuple<int, int, int, vector<int>>>, decltype(cmp)> pq(cmp);

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            dp[i][j][1] = grid[i][j];
            paths[i][j][1] = {grid[i][j]};
            pq.push({i, j, 1, {grid[i][j]}});
        }
    }

    vector<int> dirs = {0, 1, 0, -1, 0};

    while (!pq.empty()) {
        auto [x, y, len, path] = pq.top();
        pq.pop();

        if (len == k) {
            return path;
        }

        for (int d = 0; d < 4; ++d) {
            int nx = x + dirs[d];
            int ny = y + dirs[d + 1];
            if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
                vector<int> newPath = path;
                newPath.push_back(grid[nx][ny]);
                if (dp[nx][ny][len + 1] > grid[nx][ny]) {
                    dp[nx][ny][len + 1] = grid[nx][ny];
                    paths[nx][ny][len + 1] = newPath;
                    pq.push({nx, ny, len + 1, newPath});
                }
            }
        }
    }

    return {};
}