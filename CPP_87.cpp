vector<vector<int>> res;
    for (int i = 0; i < lst.size(); i++) {
        for (int j = 0; j < lst[i].size(); j++) {
            if (lst[i][j] == x) {
                res.push_back({i, j});
            }
        }
    }

    if (!res.empty()) {
        sort(res.begin(), res.end());
        for (auto& coord : res) {
            sort(coord.begin(), coord.end(), greater<int>());
        }
    }
    
    return res;
}