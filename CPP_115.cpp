int main() {
    int n;
    cin >> n;
    vector<vector<int>> grid(n);
    for(int i = 0; i < n; i++) {
        int m;
        cin >> m;
        grid[i].resize(m);
        for(int j = 0; j < m; j++) {
            int x;
            cin >> x;
            if(x == 1) {
                grid[i][j] = 1;
            } else {
                grid[i][j] = 0;
            }
        }
    }
    int capacity;
    cin >> capacity;
    cout << max_fill(grid, capacity) << endl;
    return 0;
}