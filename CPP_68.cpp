vector<int> pluck(vector<int> arr) {
    vector<pair<int, int>> evens;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            evens.push_back({arr[i], i});
        }
    }
    if (evens.empty()) {
        return {};
    }
    int min_value = evens[0].first;
    int min_index = evens[0].second;
    for (int i = 1; i < evens.size(); i++) {
        if (evens[i].first < min_value) {
            min_value = evens[i].first;
            min_index = evens[i].second;
        } else if (evens[i].first == min_value) {
            min_index = min(min_index, evens[i].second);
        }
    }
    return {{min_value, min_index}};
}