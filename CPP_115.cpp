#include <vector>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int count = 0;
    int rows = grid.size();
    int cols = grid[0].size();
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 1) {
                int buckets_needed = capacity / grid[i][j];
                if (capacity % grid[i][j] != 0) {
                    buckets_needed++;
                }
                count += buckets_needed;
            }
        }
    }
    
    return count;
}

int main() {
    assert (max_fill({{1,1,1,1}, {1,1,1,1}}, 9) == 2);
    // Add more test cases if needed
    
    return 0;
}