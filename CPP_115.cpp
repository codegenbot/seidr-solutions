Here is the completed code:

```cpp
int max_fill(vector<vector<int>> grid, int capacity) {
    int ans = 0;
    int n = grid.size();
    vector<int> bucket(n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < grid[i].size(); ++j) {
            if (grid[i][j] == 1) {
                bucket[i] += capacity;
            }
        }
    }
    
    while (true) {
        bool updated = false;
        vector<int> new_bucket(bucket);
        
        for (int i = 0; i < n; ++i) {
            if (new_bucket[i] >= grid[i].size()) {
                new_bucket[i] -= grid[i].size();
            } else {
                break;
            }
        }
        
        if (i == n) {
            return ans;
        }
        
        for (int i = 0; i < n; ++i) {
            if (new_bucket[i] > 0) {
                new_bucket[i] -= grid[i].size();
                updated = true;
            }
        }
        
        if (!updated) {
            return -1;
        }
        
        bucket = new_bucket;
        ans++;
    }
}