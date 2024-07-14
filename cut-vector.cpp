vector<vector<int>> cutVector(vector<int> v) {
    int n = v.size();
    vector<vector<int>> res;
    res.push_back(vector<int{})); 
    int min_diff = INT_MAX;
    int split_index = -1;
    for (int i = 1; i < n; i++) {
        if (v[i] == v[0]) {
            if ((i == n - 1) || (v[i+1] != v[0])) {
                min_diff = abs(v[i] - v[i-1]);
                split_index = i;
            }
        } else {
            int diff = abs(v[i] - v[i-1]);
            if (diff < min_diff) {
                min_diff = diff;
                split_index = i;
            }
        }
    }
    for (int i = 0; i < split_index; i++) {
        res.back().push_back(v[i]);
    }
    res.push_back({});
    for (int i = split_index; i < v.size(); i++) {
        res.back().push_back(v[i]);
    }
    return res;
}