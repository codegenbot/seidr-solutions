#include <vector>
#include <algorithm>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int n = grid.size();
    std::vector<int> buckets(n, 0);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                int water = std::min(capacity, n - i);
                buckets[i] += water;
                capacity -= water;
            }
        }
    }
    
    int res = 0;
    for (int i = 0; i < n; i++) {
        while (buckets[i] > 0) {
            int toTake = std::min(capacity, buckets[i]);
            buckets[i] -= toTake;
            capacity -= toTake;
            res++;
        }
        capacity = std::min(capacity, n - i);
    }
    
    return res;
}