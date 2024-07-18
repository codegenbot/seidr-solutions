vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); ++i) {
        vector<int> row = lst[i];
        for (int j = 0; j < row.size(); ++j) {
            if (row[j] == x) {
                result.push_back({i, j});
            }
        }
    }
    sort(result.begin(), result.end(), [&](const vector<int>& a, const vector<int>& b) {
        if (a[0] == b[0]) {
            return a[1] > b[1];
        }
        return a[0] < b[0];
    });
    return result;
}