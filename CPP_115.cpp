#include <vector>
using namespace std;

int max_fill(vector<vector<int>> grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int count = 0;

    for (int j = 0; j < cols; j++) {
        int buckets_needed = 0;

        for (int i = 0; i < rows; i++) {
            if (grid[i][j] == 1) {
                buckets_needed = (grid[i][j] + capacity - 1) / capacity;
                count += buckets_needed;
            }
        }
    }

    return count;
}