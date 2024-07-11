#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> path;
    int rows = grid.size();
    int cols = grid[0].size();

    int curr_k = 0;
    int i = 0, j = 0;
    while (curr_k < k) {
        path.push_back(grid[i][j]);
        if (i + 1 < rows) {
            i++;
        } else if (j + 1 < cols) {
            i = 0;
            j++;
        } else {
            break;
        }
        curr_k++;
    }

    return path;
}