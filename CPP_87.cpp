vector<vector<int>> result;
    for (int i = 0; i < lst.size(); ++i) {
        for (int j = 0; j < lst[i].size(); ++j) {
            if (lst[i][j] == x) {
                result.push_back({i, j});
            }
        }
    }

    sort(result.begin(), result.end(), [](vector<int>& a, vector<int>& b){
        return a[0] < b[0];
    });

    for (int i = 0; i < result.size(); ++i) {
        sort(result[i].begin(), result[i].end(), greater<int>());
    }

    return result;
}