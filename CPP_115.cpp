#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>

double max_fill(std::vector<std::vector<int>> grid, int capacity) {
    double total_water = 0;
    for (const auto& row : grid) {
        total_water += std::accumulate(row.begin(), row.end(), 0);
    }
    return std::ceil((total_water + capacity - 1.0) / static_cast<double>(capacity));
}