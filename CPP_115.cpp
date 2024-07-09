#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

int max_fill(vector<vector<int>>& grid, int capacity) {
    int rows = grid.size(), cols = grid[0].size(), total_water = 0, num_operations = 0;
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            total_water += grid[i][j];
    while (total_water > 0) {
        total_water -= min(total_water, capacity * rows);
        num_operations++;
    }
    return num_operations;
}

int main() {
    assert(max_fill({{1,1,1,1}, {1,1,1,1}}, 9) == 2);
    return 0;
}