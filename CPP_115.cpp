```cpp
#include <vector>

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int m = grid[0].size();
    int res = 0;
    
    for (int i = 0; i < n; ++i) {
        int water = 0;
        for (int j = 0; j < m; ++j) {
            water += grid[i][j];
        }
        
        while (water > 0) {
            res++;
            if (capacity >= water) {
                capacity -= water;
                water = 0;
            } else {
                int remaining_water = capacity;
                capacity = 0;
                for (int j = 0; j < m; ++j) {
                    if (grid[i][j] > 0) {
                        grid[i][j]--;
                        remaining_water--;
                        if (remaining_water == 0) break;
                    }
                }
                water -= remaining_water;
            }
        }
    }
    
    return res;
}