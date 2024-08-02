```cpp
#include <vector>
#include <numeric>

int main() {
    int max_fill(std::vector<std::vector<int>> grid, int capacity) {
        int n = grid.size();
        int total_water = 0;
        for (auto row : grid) {
            total_water += std::accumulate(row.begin(), row.end(), 0);
        }
        return (total_water + capacity - 1) / capacity;
    }

    assert(max_fill({{1,1,1,1}, {1,1,1,1}}, 9) == 2);

    return 0;
}