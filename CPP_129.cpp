#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int N = grid.size();
    vector<int> path;
    vector<vector<bool>> visited(N, vector<bool>(N, false));
    pair<int, int> start;
    int dx[] = {0, 0, 1, -1};
    int dy[] = {1, -1, 0, 0};

    for (int i = 1; i <= N * N; ++i) {
        for (int r = 0; r < N; ++r) {
            for (int c = 0; c < N; ++c) {
                if (grid[r][c] == i) {
                    start = make_pair(r, c);
                    break;
                }
            }
        }
    }

    path.push_back(grid[start.first][start.second]);
    visited[start.first][start.second] = true;

    while (path.size() < k) {
        int min_neighbor = N * N + 1;
        pair<int, int> next_cell;

        for (int i = 0; i < 4; ++i) {
            int nx = start.first + dx[i];
            int ny = start.second + dy[i];

            if (nx >= 0 && nx < N && ny >= 0 && ny < N && !visited[nx][ny]) {
                if (grid[nx][ny] < min_neighbor) {
                    min_neighbor = grid[nx][ny];
                    next_cell = make_pair(nx, ny);
                }
            }
        }

        path.push_back(grid[next_cell.first][next_cell.second]);
        visited[next_cell.first][next_cell.second] = true;
        start = next_cell;
    }

    return path;
}