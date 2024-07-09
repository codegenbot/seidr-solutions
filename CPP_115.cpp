int main() {
    int n;
    cin >> n;
    vector<vector<int>> grid(n);
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        grid[i].resize(m);
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }
    int capacity;
    cin >> capacity;
    cout << max_fill(grid, capacity) << endl;
    return 0;
}