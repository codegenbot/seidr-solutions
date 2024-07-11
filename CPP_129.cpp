int N = grid.size();
    vector<int> result;
    int x = 0, y = 0;
    for (int i = 0; i < k; ++i) {
        result.push_back(grid[x][y]);
        if ((x + y) % 2 == 0) {
            if (y == N - 1) {
                ++x;
            } else if (x == 0) {
                ++y;
            } else {
                --x;
                ++y;
            }
        } else {
            if (x == N - 1) {
                ++y;
            } else if (y == 0) {
                ++x;
            } else {
                ++x;
                --y;
            }
        }
    }
    return result;
}