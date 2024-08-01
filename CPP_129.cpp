#include <algorithm>
#include <vector>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> res;
    for (int i = 0; i < k; ++i) {
        int maxVal = -1;
        int row = -1, col = -1;
        for (int j = 0; j < grid.size(); ++j) {
            for (int c = 0; c < grid[0].size(); ++c) {
                if (grid[j][c] > maxVal && res.empty() || find(res.begin(), res.end(), grid[j][c]) == res.end()) {
                    maxVal = grid[j][c];
                    row = j;
                    col = c;
                }
            }
        }
        res.push_back(maxVal);
        for (int i = 0; i < grid.size(); ++i) {
            if (i != row) {
                swap(grid[i][col], grid[0][0]);
                break;
            }
        }
    }
    return res;
}