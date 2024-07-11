vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;

    int min_even = INT_MAX;
    int min_even_index = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < min_even) {
            min_even = arr[i];
            min_even_index = i;
        }
    }

    if (min_even != INT_MAX) {
        result.push_back({min_even, min_even_index});
    } else {
        result.push_back({});
    }

    return result;
}