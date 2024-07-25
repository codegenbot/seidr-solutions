```cpp
#include <vector>

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> buckets(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j]) {
                buckets[i] += capacity;
            }
        }
    }

    int total_water = 0;
    int operations = 0;
    while (total_water < accumulate(buckets.begin(), buckets.end(), 0)) {
        for (int i = 0; i < n; i++) {
            if (buckets[i] > 0) {
                buckets[i]--;
                total_water++;
            }
        }
        operations++;
    }

    return operations;
}