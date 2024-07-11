vector<pair<int, int>> pluck(vector<int> arr) {
    if (arr.empty()) return {};

    vector<pair<int, int>> result;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            result = {{arr[i], i}};
            break;
        }
    }

    if (result.empty()) return {};
    pair<int, int> minPair = *min_element(result.begin(), result.end());
    return {minPair};
}