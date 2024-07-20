Here is the completed code:

```cpp
int max_fill(vector<vector<int>> grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int res = 0;
    
    for (int r = 0; r < rows; ++r) {
        int col_sum = 0;
        for (int c = 0; c < cols; ++c) {
            if (grid[r][c] == 1) {
                col_sum += 1;
            }
        }
        
        while (col_sum > capacity) {
            col_sum -= capacity;
            res++;
        }
    }
    
    return res;
}