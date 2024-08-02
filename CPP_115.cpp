```cpp
#include <vector>

int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        for (int water : row) {
            if (water == 1) {
                total_water += 1; // assuming the value is binary (0 or 1)
            }
        }
    }

    return total_water / capacity + (total_water % capacity != 0);
}