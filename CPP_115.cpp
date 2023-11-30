#include <iostream>
#include <vector>

using namespace std;

int max_fill(vector<vector<int>> grid, int capacity) {
    int count = 0;
    int rows = grid.size();
    int cols = grid[0].size();

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 1) {
                int buckets_needed = grid[i][j] / capacity;
                if (grid[i][j] % capacity != 0) {
                    buckets_needed++;
                }
                count += buckets_needed;
            }
        }
    }

    return count;
}