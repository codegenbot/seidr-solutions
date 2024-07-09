int main() {
    vector<vector<int>> grid = {{0,1,0},{0,0,1},{1,1,1}};
    int capacity = 3;
    cout << max_fill(grid, capacity) << endl;
    return 0;
}