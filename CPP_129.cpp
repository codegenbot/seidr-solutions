#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> solve(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> result;
    int x = 0, y = 0;
    for (int i = 0; i < k; ++i) {
        result.push_back(grid[x][y]);
        if ((x + y) % 2 == 0) {
            if (y == n - 1) {
                x++;
            } else if (x == 0) {
                y++;
            } else {
                if (grid[x - 1][y] > grid[x][y + 1]) {
                    x++;
                } else {
                    y++;
                }
            }
        } else {
            if (x == n - 1) {
                y++;
            } else if (y == 0) {
                x++;
            } else {
                if (grid[x][y - 1] > grid[x + 1][y]) {
                    y++;
                } else {
                    x++;
                }
            }
        }
    }
    return result;
}