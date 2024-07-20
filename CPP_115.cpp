Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> buckets(n);
    int max_steps = 0;

    for (int steps = 0; ; ++steps) {
        bool can_continue = false;
        for (int i = 0; i < n; ++i) {
            if (buckets[i] > 0) {
                int amount_to_add = min(capacity, grid[i].size() - buckets[i]);
                grid[i][buckets[i]] = 0;
                buckets[i] += amount_to_add;
                can_continue = true;
            }
        }

        if (!can_continue) break;

        max_steps = steps + 1;
    }

    return max_steps;
}