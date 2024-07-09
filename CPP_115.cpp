#include <vector>
#include <algorithm>
#include <cmath>

double max_fill(const vector<vector<int>>& grid, int capacity) {
    double total_water = 0;
    for (int i = 0; i < grid.size(); i++) {
        total_water += std::accumulate(grid[i].begin(), grid[i].end(), 0);
    }
    return ceil((double)total_water / capacity);
}

int main() {
    vector<vector<int>> grid = {{1,1,1,1}, {1,1,1,1}};
    assert(max_fill(grid, 9) == 2);
    return 0;
}