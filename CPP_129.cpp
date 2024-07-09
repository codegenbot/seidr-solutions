#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> res;
    int n = grid.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == 1) {
                queue<pair<int, int>> q;
                vector<vector<bool>> visited(n, vector<bool>(n));
                visited[i][j] = true;
                res.push_back(grid[i][j]);
                q.push({i, j});
                for (int l = 0; l < k; ++l) {
                    int ni = q.front().first, nj = q.front().second;
                    q.pop();
                    vector<pair<int, int>> neighbors = {{ni - 1, nj}, {ni + 1, nj}, {ni, nj - 1}, {ni, nj + 1}};
                    sort(neighbors.begin(), neighbors.end());
                    for (auto &neighbor : neighbors) {
                        if (neighbor.first >= 0 && neighbor.second >= 0 && neighbor.first < n && neighbor.second < n &&
                            !visited[neighbor.first][neighbor.second]) {
                            visited[neighbor.first][neighbor.second] = true;
                            res.push_back(grid[neighbor.first][neighbor.second]);
                            q.push(neighbor);
                        }
                    }
                }
                return res;
            }
        }
    }
    return {};
}