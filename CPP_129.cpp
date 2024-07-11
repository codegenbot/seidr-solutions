#include <algorithm>
#include <vector>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> res;
    for (int i = 0; i < k; ++i) {
        int maxVal = -1;
        int row, col;
        for (int j = 0; j < grid.size(); ++j) {
            for (int m = 0; m < grid[0].size(); ++m) {
                if (grid[j][m] > maxVal) {
                    maxVal = grid[j][m];
                    row = j;
                    col = m;
                }
            }
        }
        res.push_back(maxVal);
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                if (i == row && j == col) {
                    grid[i][j] = -1;
                }
            }
        }
    }
    return res;
}