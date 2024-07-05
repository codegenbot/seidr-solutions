#include <vector>
#include <queue>
#include <tuple>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int N = grid.size();
    vector<vector<vector<int>>> dp(N, vector<vector<int>>(N, vector<int>(k + 1, INT_MAX)));
    vector<vector<vector<vector<int>>>> path(N, vector<vector<vector<int>>>(N, vector<vector<int>>(k + 1)));

    auto comp = [](const tuple<int, int, int, vector<int>>& a, const tuple<int, int, int, vector<int>>& b) {
        return get<3>(a) > get<3>(b);
    };
    priority_queue<tuple<int, int, int, vector<int>>, vector<tuple<int, int, int, vector<int>>>, decltype(comp)> pq(comp);

    vector<int> dx = {1, -1, 0, 0};
    vector<int> dy = {0, 0, 1, -1};

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            dp[i][j][1] = grid[i][j];
            path[i][j][1] = {grid[i][j]};
            pq.push({i, j, 1, path[i][j][1]});
        }
    }

    while (!pq.empty()) {
        auto [x, y, len, currPath] = pq.top();
        pq.pop();
        
        if (len == k) continue;

        for (int d = 0; d < 4; ++d) {
            int nx = x + dx[d];
            int ny = y + dy[d];

            if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
                vector<int> newPath = currPath;
                newPath.push_back(grid[nx][ny]);

                if (newPath < path[nx][ny][len + 1]) {
                    path[nx][ny][len + 1] = newPath;
                    pq.push({nx, ny, len + 1, newPath});
                }
            }
        }
    }

    vector<int> result = path[0][0][k];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (path[i][j][k] < result) {
                result = path[i][j][k];
            }
        }
    }

    return result;
}