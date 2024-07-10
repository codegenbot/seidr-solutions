#include <vector>
#include <cassert>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> result;
    int m = grid.size();
    int n = grid[0].size();
    int i = 0, j = 0;
    result.push_back(grid[i][j]);
    while (i < m - 1 || j < n - 1) {
        if (i == m - 1) {
            j++;
        } else if (j == n - 1) {
            i++;
        } else {
            if (grid[i + 1][j] < grid[i][j + 1]) {
                i++;
            } else {
                j++;
            }
        }
        result.push_back(grid[i][j]);
    }
    return result;
}