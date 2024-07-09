int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> fills(n, 0);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                fills[i] += 1;
            }
        }
    }
    
    int result = 0;
    int remainder = capacity;
    for (int i = n - 1; i >= 0; i--) {
        while (remainder > 0 && fills[i] > 0) {
            if (fills[i] <= remainder) {
                fills[i] = 0;
                result++;
                remainder = 0;
            } else {
                result += fills[i] - remainder;
                fills[i] = remainder;
                break;
            }
        }
    }
    
    return result;
}