#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>
#include <numeric>

double max_fill(std::vector<std::vector<int>> grid, int capacity) {
    double total_water = 0;
    for (const auto& row : grid) {
        total_water += std::accumulate(row.begin(), row.end(), 0);
    }
    return std::ceil((total_water + capacity - 1.0) / capacity);
}

int main() {
    assert(max_fill({{1,1,1,1}, {1,1,1,1}}, 9) == 2);
    int result = max_fill({{1,1,1,1}, {1,1,1,1}}, 9);
    return 0;
}