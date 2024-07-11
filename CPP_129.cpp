#include <algorithm>
#include <vector>
#include <climits>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> res;
    for (int i = 0; i < k; ++i) {
        int minVal = INT_MAX, minIndexRow = -1, minIndexCol = -1;
        for (int j = 0; j < grid.size(); ++j) {
            for (int col = 0; col < grid[j].size(); ++col) {
                if (grid[j][col] <= minVal) {
                    minVal = grid[j][col];
                    minIndexRow = j;
                    minIndexCol = col;
                }
            }
        }
        res.push_back(minVal);
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[i].size(); ++j) {
                if ((i == minIndexRow) && (j == minIndexCol)) {
                    grid[i][j] = INT_MAX;
                }
            }
        }
    }
    return res;
}