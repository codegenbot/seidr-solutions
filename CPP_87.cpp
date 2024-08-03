vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<pair<int, int>>> result;
    for (int i = 0; i < lst.size(); i++) {
        for (int j = 0; j < lst[i].size(); j++) {
            if (lst[i][j] == x) {
                result.push_back({{i, j}});
            }
        }
    }
    sort(result.begin(), result.end());
    for (auto &row : result) {
        row[0][1] = lst.size() - 1 - row[0][1];
    }
    return result;
}