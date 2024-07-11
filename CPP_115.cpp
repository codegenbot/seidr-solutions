int max_fill(vector<vector<int>> grid, int capacity) {
    int count = 0;
    while (true) {
        bool changed = false;
        vector<int> rowSum;
        for (const auto& row : grid) {
            int sum = 0;
            for (int v : row) {
                sum += v;
                if (sum >= capacity) {
                    sum -= capacity;
                    changed = true;
                }
            }
            rowSum.push_back(sum);
        }
        if (!changed) break;
        count++;
    }
    return count;
}