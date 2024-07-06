vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i].size() > x) {
            for (int j = 0; j <= x && j < lst[i].size(); j++) {
                result.push_back({i, j});
            }
        }
    }
    return result;
}