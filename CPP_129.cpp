#include <vector>
#include <queue>
#include <climits>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k){
    int rows = grid.size();
    int cols = grid[0].size();

    std::vector<std::vector<int>> dist(rows, std::vector<int>(cols, INT_MAX));
    std::queue<std::pair<int, int>> q;
    q.push({0, 0});
    dist[0][0] = grid[0][0];

    std::vector<std::pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    while (!q.empty()) {
        auto cur = q.front();
        q.pop();

        for (const auto& dir : directions) {
            int newRow = cur.first + dir.first;
            int newCol = cur.second + dir.second;

            if (newRow >= 0 && newRow < rows && newCol >= 0 && newCol < cols) {
                int newDist = dist[cur.first][cur.second] + grid[newRow][newCol];
                if (newDist < dist[newRow][newCol] && newDist <= k) {
                    dist[newRow][newCol] = newDist;
                    q.push({newRow, newCol});
                }
            }
        }
    }

    if (dist[rows - 1][cols - 1] != INT_MAX && dist[rows - 1][cols - 1] <= k) {
        std::vector<int> path;
        int r = rows - 1, c = cols - 1;
        path.push_back(grid[r][c]);
        while (r != 0 || c != 0) {
            for (const auto& dir : directions) {
                int newRow = r + dir.first;
                int newCol = c + dir.second;
                if (newRow >= 0 && newRow < rows && newCol >= 0 && newCol < cols) {
                    if (dist[newRow][newCol] + grid[r][c] == dist[r][c]) {
                        r = newRow;
                        c = newCol;
                        path.push_back(grid[r][c]);
                        break;
                    }
                }
            }
        }
        std::reverse(path.begin(), path.end());
        return path;
    }
    return {};
}