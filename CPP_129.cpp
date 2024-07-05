#include <vector>
#include <queue>
#include <tuple>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int N = grid.size();
    vector<vector<int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    vector<int> result(k, N * N + 1);
    auto cmp = [](const vector<int>& a, const vector<int>& b) {
        return a > b;
    };
    priority_queue<vector<int>, vector<vector<int>>, decltype(cmp)> pq(cmp);

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            pq.push({grid[i][j], i, j});
        }
    }

    while (!pq.empty()) {
        vector<int> path = pq.top();
        pq.pop();
        if (path.size() == k + 2) {
            vector<int> candidate(path.begin(), path.begin() + k);
            if (candidate < result) {
                result = candidate;
            }
        } else {
            int x = path[path.size() - 2];
            int y = path[path.size() - 1];
            for (auto& dir : directions) {
                int nx = x + dir[0], ny = y + dir[1];
                if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
                    vector<int> newPath = path;
                    newPath.insert(newPath.end() - 2, grid[nx][ny]);
                    newPath[newPath.size() - 2] = nx;
                    newPath[newPath.size() - 1] = ny;
                    pq.push(newPath);
                }
            }
        }
    }

    return result;
}