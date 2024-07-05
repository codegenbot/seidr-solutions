#include <vector>
#include <queue>
#include <tuple>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int N = grid.size();
    vector<vector<vector<int>>> dp(N, vector<vector<int>>(N, vector<int>(k + 1, INT_MAX)));
    vector<vector<vector<vector<int>>>> paths(N, vector<vector<vector<int>>>(N, vector<vector<int>>(k + 1)));

    auto cmp = [&](tuple<int, int, int> a, tuple<int, int, int> b) {
        int x1, y1, len1, x2, y2, len2;
        tie(x1, y1, len1) = a;
        tie(x2, y2, len2) = b;
        return paths[x1][y1][len1] > paths[x2][y2][len2];
    };

    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, decltype(cmp)> pq(cmp);

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            dp[i][j][1] = grid[i][j];
            paths[i][j][1] = {grid[i][j]};
            pq.push(make_tuple(i, j, 1));
        }
    }

    int dirs[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

    while (!pq.empty()) {
        auto [x, y, len] = pq.top();
        pq.pop();

        if (len == k) continue;

        for (auto& dir : dirs) {
            int nx = x + dir[0], ny = y + dir[1];
            if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
                vector<int> newPath = paths[x][y][len];
                newPath.push_back(grid[nx][ny]);
                if (newPath < paths[nx][ny][len + 1]) {
                    paths[nx][ny][len + 1] = newPath;
                    pq.push(make_tuple(nx, ny, len + 1));
                }
            }
        }
    }

    vector<int> result = paths[0][0][k];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (paths[i][j][k] < result) {
                result = paths[i][j][k];
            }
        }
    }
    return result;
}