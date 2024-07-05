#include <queue>
#include <tuple>

vector<int> minPath(vector<vector<int>> grid, int k) {
    int N = grid.size();
    vector<int> directions = {-1, 0, 1, 0, -1};
    vector<int> result(k, INT_MAX);

    auto compare = [](const tuple<vector<int>, int, int>& a, const tuple<vector<int>, int, int>& b) {
        return get<0>(a) > get<0>(b);
    };

    priority_queue<tuple<vector<int>, int, int>, vector<tuple<vector<int>, int, int>>, decltype(compare)> pq(compare);

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            pq.push({{grid[i][j]}, i, j});
        }
    }

    while (!pq.empty()) {
        auto [path, x, y] = pq.top();
        pq.pop();

        if (path.size() == k) {
            if (path < result) result = path;
            continue;
        }

        for (int d = 0; d < 4; ++d) {
            int nx = x + directions[d];
            int ny = y + directions[d + 1];
            if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
                vector<int> newPath = path;
                newPath.push_back(grid[nx][ny]);
                pq.push({newPath, nx, ny});
            }
        }
    }

    return result;
}