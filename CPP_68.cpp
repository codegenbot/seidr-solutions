vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;

    auto it = min_element(arr.begin(), arr.end(),
        [](int a, int b) { return a % 2 != 0 || b % 2 != 0 || a > b; });

    int smallest_even_value = *it;
    int index = distance(arr.begin(), it);

    result.push_back({smallest_even_value, index});

    return result;
}