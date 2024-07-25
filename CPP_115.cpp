#include <vector>
#include <numeric>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        total_water += std::accumulate(row.begin(), row.end(), 0);
    }
    
    int buckets_needed = total_water / capacity;
    int remaining_water = total_water % capacity;
    
    return buckets_needed + (remaining_water > 0 ? 1 : 0);
}