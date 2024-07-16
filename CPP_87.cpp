vector<vector<int>> get_row(vector<vector<int>> lst, int x){
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); ++i) {
        for (int j = 0; j < lst[i].size(); ++j) {
            if (lst[i][j] == x) {
                result.push_back({i, j});
            }
        }
    }
    for (auto& row : result) {
        if (row.size() > 1) {
            sort(row.begin(), row.end(), greater<int>());
        }
    }
    sort(result.begin(), result.end());
    return result;
}