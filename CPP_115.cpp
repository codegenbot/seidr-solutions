```cpp
#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<std::vector<int>> grid;

    for (int i = 0; i < 3; i++) {
        std::vector<int> row;
        for (int j = 0; j < 3; j++) {
            row.push_back(1 + i + 2 * j);
        }
        grid.push_back(row);
    }

    int max_fill_times = -1;
    int current_water = 0;
    int fill_times = 0;

    while (current_water < std::accumulate(grid.begin(), grid.end(), 0, std::partial_sum)) {
        for (int i = 0; i < 3; i++) {
            current_water += std::accumulate(grid[i].begin(), grid[i].end(), 0);
            if (current_water >= 10) {
                fill_times++;
                current_water -= 10;
            }
        }
        max_fill_times = std::max(max_fill_times, fill_times);
    }

    std::cout << "Maximum number of times the tank can be filled: " << max_fill_times << endl;
    return 0;
}