#include <iostream>
#include <vector>

int max_fill(vector<vector<int>> grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int count = 0;

    for (int j = 0; j < cols; j++) {
        int buckets = 0;
        for (int i = 0; i < rows; i++) {
            if (grid[i][j] == 1) {
                buckets++;
                if (buckets == capacity) {
                    count++;
                    buckets = 0;
                }
            }
        }
        if (buckets > 0) {
            count++;
        }
    }

    return count;
}

int main() {
    vector<vector<int>> grid = {{0, 0, 1, 0}, {0, 1, 0, 0}, {1, 1, 1, 1}};
    int bucket_capacity = 1;

    int result = max_fill(grid, bucket_capacity);
    cout << result << endl;

    return 0;
}