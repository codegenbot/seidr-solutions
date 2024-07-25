#include <stdio.h>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> res;
    int n = grid.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (k == 1) {
                res.push_back(grid[i][j]);
                return res;
            }
            else {
                res.push_back(grid[i][j]);
                k--;
                int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
                queue<pair<int, int>> q;
                q.push({i, j});
                while (k--) {
                    int x = q.front().first;
                    int y = q.front().second;
                    q.pop();
                    for (int d = 0; d < 4; d++) {
                        int nx = x + dir[d][0];
                        int ny = y + dir[d][1];
                        if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                            q.push({nx, ny});
                        }
                    }
                }
                return res;
            }
        }
    }
}