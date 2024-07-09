#include <vector>
#include <cmath>

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    double total_water = 0;
    for (int i = 0; i < n; i++) {
        total_water += accumulate(grid[i].begin(), grid[i].end(), 0);
    }
    return static_cast<int>(ceil((double)total_water / capacity));
}