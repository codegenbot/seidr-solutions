#include <vector>
#include <algorithm>

double max_fill(vector<vector<int>> grid, int capacity) {
    double total_water = 0;
    for (const auto& row : grid) {
        total_water += std::accumulate(row.begin(), row.end(), 0);
    }
    return ceil((total_water + capacity - 1.0) / capacity);
}