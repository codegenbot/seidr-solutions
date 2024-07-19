int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> wells(n, 0);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < grid[i].size(); ++j) {
            wells[i] += grid[i][j];
        }
    }

    int times = 0;
    while (true) {
        bool changed = false;

        for (int i = 0; i < n; ++i) {
            if (wells[i] > 0) {
                wells[i] -= capacity;
                if (wells[i] <= 0) {
                    wells[i] = 0;
                    changed = true;
                }
            }
        }

        if (!changed)
            break;

        times++;
    }

    return times;
}

int main() {
    vector<vector<int>> grid = {{1, 2}, {3, 4}};
    int capacity = 5;
    cout << "Maximum number of fills: " << max_fill(grid, capacity) << endl;
    return 0;
}