vector<vector<int>> get_row(vector<vector<int>> lst, int x){
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); ++i) {
        for (int j = 0; j < lst[i].size(); ++j) {
            if (lst[i][j] == x) {
                result.push_back({i, j});
            }
        }
    }
    sort(result.begin(), result.end(), [](vector<int> a, vector<int> b){
        return a[0] < b[0];
    });
    for (auto &res : result) {
        sort(res.begin(), res.end(), greater<int>());
    }
    return result;
}