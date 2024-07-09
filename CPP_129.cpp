```
#include <vector>
#include <queue>
#include <algorithm>

std::vector<int> minPath(std::vector<std::vector<int>>& grid, int k) {
    int n = grid.size();
    std::vector<std::vector<bool>> visited(n, std::vector<bool>(n));
    std::vector<std::pair<int, int>> dir = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    std::priority_queue<std::pair<int, std::pair<int, int>>, std::vector<std::pair<int, std::pair<int, int>>>, std::greater<std::pair<int, std::pair<int, int>>>> pq;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == 1) {
                pq.push({k, {i, j}});
                break;
            }
        }
    }

    std::vector<int> res;

    while (!pq.empty()) {
        auto [dist, pos] = pq.top();
        pq.pop();

        if (dist > 0) {
            res.push_back(grid[pos.first][pos.second]);
            visited[pos.first][pos.second] = true;

            for (auto& d : dir) {
                int ni = pos.first + d.first;
                int nj = pos.second + d.second;
                if (ni >= 0 && ni < n && nj >= 0 && nj < n && !visited[ni][nj]) {
                    pq.push({dist - 1, {ni, nj}});
                }
            }
        }

        if (res.size() == k) break;
    }

    return res;
}