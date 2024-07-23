int mainTest() {
    vector<vector<int>> grid1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "{";
    for (int val : minPath(grid1, 3)) {
        cout << val << " ";
    }
    cout << "}\n";

    vector<vector<int>> grid2 = {{5, 9, 3}, {4, 1, 6}, {7, 8, 2}};
    cout << "{";
    for (int val : minPath(grid2, 1)) {
        cout << val << " ";
    }
    cout << "}\n";

    return 0;
}