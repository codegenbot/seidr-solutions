Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> remaining(n);
    for (int i = 0; i < n; i++) {
        int total = 0;
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                total++;
            }
        }
        remaining[i] = total;
    }
    int steps = 0;
    while (true) {
        bool changed = false;
        for (int i = 0; i < n; i++) {
            if (remaining[i] >= capacity) {
                remaining[i] -= capacity;
                steps++;
                changed = true;
            } else if (remaining[i] > 0) {
                int left = capacity - remaining[i];
                remaining[i] = 0;
                for (int j = i + 1; j < n; j++) {
                    if (remaining[j] >= left) {
                        remaining[j] -= left;
                        steps++;
                        changed = true;
                        break;
                    } else if (remaining[j] > 0) {
                        int take = capacity - remaining[j];
                        remaining[i] += take;
                        remaining[j] = 0;
                        steps++;
                        changed = true;
                        break;
                    }
                }
            }
        }
        if (!changed) {
            break;
        }
    }
    return steps;
}