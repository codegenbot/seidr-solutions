int n = grid.size();
    vector<int> result(k);
    int x = 0, y = 0, dx = 1, dy = 0;
    for (int i = 0; i < k; ++i) {
        result[i] = grid[x][y];
        grid[x][y] = 0;
        if (x + dx < 0 || x + dx >= n || y + dy < 0 || y + dy >= n || grid[x + dx][y + dy] == 0) {
            swap(dx, dy);
            dy = -dy;
        }
        x += dx;
        y += dy;
    }
    return result;
}