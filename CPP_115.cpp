Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int ans = 0;
    int sum = 0;
    for (auto row : grid) {
        for (int w : row) {
            if (w == 1) {
                sum += w;
            }
        }
    }

    while (sum > 0) {
        sum -= capacity;
        ans++;
    }
    return ans;
}