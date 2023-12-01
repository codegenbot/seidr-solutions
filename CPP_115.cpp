#include <iostream>
#include <vector>

int max_fill(std::vector<std::vector<int>>& grid, int capacity) {
    int count = 0;
    if (!grid.empty()) {
        for (const auto& row : grid) {
            for (int val : row) {
                if (val > 0) {
                    int buckets_needed = (val + capacity - 1) / capacity;
                    count += buckets_needed;
                }
            }
        }
    }
    return count;
}