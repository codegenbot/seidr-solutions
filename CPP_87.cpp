vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); ++i) {
        vector<int> row_indices;
        for (int j = 0; j < lst[i].size(); ++j) {
            if (lst[i][j] == x) {
                row_indices.push_back(j);
            }
        }
        sort(row_indices.rbegin(), row_indices.rend());
        for (int idx : row_indices) {
            result.push_back({i, idx});
        }
    }
    return result;
}