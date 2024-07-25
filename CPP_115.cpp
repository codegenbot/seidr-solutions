Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<vector<int>> sum(n, vector<int>(grid[0].size()));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (i == 0)
                sum[i][j] = grid[i][j];
            else
                sum[i][j] += sum[i - 1][j] + grid[i][j];
        }
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        int curr_water = sum[n - 1][i];
        int remain = capacity;
        while (remain > 0) {
            if (curr_water >= remain)
                curr_water -= remain;
            else
                res++, remain -= curr_water, curr_water = capacity;
        }
    }
    return res;