#include <vector>

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (int i = 0; i < n; i++) {
        total_water += accumulate(grid[i].begin(), grid[i].end(), 0);
    }
    
    int max_fill_times = -1;
    int current_water = 0;
    int fill_times = 0;
    
    while (current_water < total_water) {
        for (int i = 0; i < n; i++) {
            current_water += accumulate(grid[i].begin(), grid[i].end(), 0);
            if (current_water >= capacity) {
                fill_times++;
                current_water -= capacity;
            }
        }
        max_fill_times = max(max_fill_times, fill_times);
    }
    
    return max_fill_times;
}