#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b) {}

vector<int> minPath(vector<vector<int>> grid, int k);

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;

    vector<int> result = minPath(grid, k);

    // Print or use the result as needed

    return 0;
}

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> path;

    for (int i = 0; i < k; ++i) {
        int min_val = n * n + 1;
        pair<int, int> min_pos;

        for (int r = 0; r < n; ++r) {
            for (int c = 0; c < n; ++c) {
                if (grid[r][c] != -1) {
                    if (grid[r][c] < min_val) {
                        min_val = grid[r][c];
                        min_pos = {r, c};
                    }
                }
            }
        }

        path.push_back(min_val);
        grid[min_pos.first][min_pos.second] = -1;

        if (i == k - 1) {
            break;
        }

        int r = min_pos.first;
        int c = min_pos.second;

        if (r > 0 && grid[r - 1][c] != -1) {
            grid[r - 1][c] = -1;
        }
        if (r < n - 1 && grid[r + 1][c] != -1) {
            grid[r + 1][c] = -1;
        }
        if (c > 0 && grid[r][c - 1] != -1) {
            grid[r][c - 1] = -1;
        }
        if (c < n - 1 && grid[r][c + 1] != -1) {
            grid[r][c + 1] = -1;
        }
    }

    return path;
}