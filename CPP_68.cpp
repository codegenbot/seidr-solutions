vector<int> pluck(vector<int> arr) {
    vector<pair<int, int>> pairs;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            pairs.push_back({arr[i], i});
        }
    }
    
    if (pairs.empty()) {
        return {};
    }
    
    sort(pairs.begin(), pairs.end());
    return {pairs[0].first, pairs[0].second};
}