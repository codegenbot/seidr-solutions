#include <bits/stdc++.h>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int total_water = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 1) {
                total_water++;
            }
        }
    }

    int buckets_needed = total_water / capacity;
    int remaining_water = total_water % capacity;

    while (remaining_water > 0) {
        buckets_needed++;
        remaining_water -= capacity;
    }

    return buckets_needed;
}