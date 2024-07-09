int max_fill(vector<vector<int>> grid, int capacity) {
    int count = 0;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (grid[i][j] == 1) {
                int remain = capacity;
                while (remain > 0 && j < grid[0].size()) {
                    if (grid[i][j] == 1) {
                        remain--;
                    }
                    j++;
                }
                count += (capacity - remain);
            }
        }
    }
    return count;
}