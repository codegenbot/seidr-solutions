vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); ++i) {
        vector<int> row;
        for (int j = lst[i].size() - 1; j >= 0; --j) {
            if (lst[i][j] == x) {
                row.push_back(j);
            }
        }
        for (auto col : row) {
            result.push_back({i, col});
        }
    }
    return result;
}