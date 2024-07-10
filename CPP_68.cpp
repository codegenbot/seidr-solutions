vector<int> pluck(vector<int> arr) {
    vector<pair<int, int>> nodes;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            nodes.push_back({arr[i], i});
        }
    }

    if (nodes.empty()) {
        return {};
    }

    pair<int, int> result = *min_element(nodes.begin(), nodes.end());
    vector<int> res;
    res.push_back(result.first);
    res.push_back(result.second);
    return res;
}