#include <vector>
#include <algorithm>

int max_fill(std::vector<std::vector<int>>& grid, int capacity);

int max_fill(std::vector<std::vector<int>>& grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        for (int cell : row) {
            total_water += cell;
        }
    }

    int buckets_needed = 0;
    while (total_water > 0) {
        total_water -= std::min(total_water, capacity);
        buckets_needed++;
    }

    return buckets_needed;
}