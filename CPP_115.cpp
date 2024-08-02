#include <vector>
#include <cmath>

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    double total_water = 0;
    for (int i = 0; i < n; i++) {
        total_water += std::accumulate(grid[i].begin(), grid[i].end(), 0.0);
    }
    
    return static_cast<int>(std::ceil(total_water / capacity));
}