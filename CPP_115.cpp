#include <vector>

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> bucket(n, 0);
    int res = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                bucket[i] += 1;
            }
        }
    }
    
    while (true) {
        bool changed = false;
        for (int i = 0; i < n; i++) {
            int fill = min(capacity, bucket[i]);
            bucket[i] -= fill;
            res += fill;
            if (bucket[i] == 0) {
                break;
            }
        }
        
        if (!changed && capacity > 0) {
            return -1;
        }
    }
    
    return res;
}