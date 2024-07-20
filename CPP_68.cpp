vector<int> pluck(vector<int> arr) {
    vector<pair<int, int>> pairs;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            pairs.push_back({arr[i], i});
        }
    }
    
    if (pairs.empty()) return {};
    
    pair<int, int> result = *min_element(pairs.begin(), pairs.end());
    
    vector<int> output;
    output.push_back(result.first);
    output.push_back(result.second);
    
    return output;
}