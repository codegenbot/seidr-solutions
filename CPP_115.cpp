int main() {
    vector<vector<int>> grid = {{0,1,0},{0,1,1},{0,1,0}};
    int capacity = 2;
    cout << max_fill(grid, capacity) << endl;
    return 0;
}