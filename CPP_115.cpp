#include <vector>

int max_fill(vector<vector<int>> grid, int capacity) {
    int buckets = 0;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            int water = grid[i][j];
            if (water > 0) {
                int fill = (water + capacity - 1) / capacity; // Calculate number of buckets needed to empty well
                buckets += fill;
            }
        }
    }
    return buckets;
}