```cpp
#include <vector>
#include <numeric>

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (int i = 0; i < n; i++) {
        total_water += std::accumulate(grid[i].begin(), grid[i].end(), 0);
    }
    
    int max_fill_count = -1;
    int current_water = 0;
    int fill_count = 0;
    while (current_water < total_water) {
        for (int i = 0; i < n; i++) {
            current_water += std::accumulate(grid[i].begin(), grid[i].end(), 0);
        }
        if (current_water > capacity * n) {
            max_fill_count++;
            current_water -= capacity;
        } else {
            fill_count++;
        }
    }
    
    return max_fill_count + fill_count;
}