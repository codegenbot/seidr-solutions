```
#include <vector>

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> buckets(n, 0);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                int water = min(capacity, n - i);
                buckets[i] += water;
                capacity -= water;
            }
        }
    }
    
    int res = 0;
    for (int i = 0; i < n; i++) {
        while (buckets[i] > 0) {
            int toTake = min(capacity, buckets[i]);
            buckets[i] -= toTake;
            capacity -= toTake;
            res++;
        }
        capacity = min(capacity, n - i);
    }
    
    return res;
}