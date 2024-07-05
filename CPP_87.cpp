vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); ++i) {
        vector<int> row;
        for (int j = 0; j < lst[i].size(); ++j) {
            if (lst[i][j] == x) {
                row.push_back(j);
            }
        }
        sort(row.rbegin(), row.rend());
        for (int col : row) {
            result.push_back({i, col});
        }
    }
    return result;
}