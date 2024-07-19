Here is the completed code:

```cpp
int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<vector<int>> rows(n, vector<int>(capacity + 1, 0));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= capacity; j++) {
            if (j >= grid[i].size()) 
                rows[i][j] = rows[i][grid[i].size() - 1];
            else
                rows[i][j] = rows[i][j - 1];
            for (int k = min(j, (int)grid[i].size()); k > 0; k--) {
                if (grid[i].size() - k <= j - k) 
                    break;
                rows[i][k] += grid[i].size() - k;
                rows[i][j] -= min(grid[i].size() - k, j - k);
            }
        }
    }
    
    int ans = 0;
    for (int i = capacity; i >= 0; i--) {
        if (rows[0][i] == 0) 
            break;
        else 
            ans += rows[0][i];
    }
    
    return ans;
}