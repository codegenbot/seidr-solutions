Here is the completed code:

```cpp
int max_fill(vector<vector<int>> grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int res = 0;

    for (int i = 0; i < rows; ++i) {
        int row_sum = 0;
        for (int j = 0; j < cols; ++j)
            row_sum += grid[i][j];

        while (row_sum > 0) {
            if (capacity <= row_sum) {
                capacity = 0;
                res += 1;
                break;
            }

            int remaining_capacity = capacity;
            for (int j = 0; j < cols; ++j)
                if (grid[i][j] && remaining_capacity >= 1) {
                    grid[i][j] = 0;
                    --remaining_capacity;
                } else
                    break;

            capacity -= min(capacity, row_sum);
        }
    }

    return res;
}