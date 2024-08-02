#include <vector>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> minPath(const vector<vector<int>>& grid, int k) {
    vector<int> path;
    int i = 0, j = 0;
    int rows = grid.size();
    int cols = grid[0].size();

    while (k > 0) {
        path.push_back(grid[i][j]);
        k -= grid[i][j];
        
        if (i == rows - 1 && j == cols - 1) break;

        if (i < rows - 1 && (j == cols - 1 || grid[i + 1][j] <= grid[i][j + 1])) {
            i++;
        } else {
            j++;
        }
    }

    return path;
}