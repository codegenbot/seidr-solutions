Here is the solution:

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i].size() > 0) {
            for (int j = 0; j < lst[i].size(); j++) {
                if (x == lst[i][j]) {
                    result.push_back({i, j});
                }
            }
        }
    }
    sort(result.begin(), result.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0];
    });
    for (auto &p : result) {
        sort(p.begin(), p.end());
    }
    reverse(result.begin(), result.end());
    return result;
}