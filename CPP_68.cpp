vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return result;

    int smallest = INT_MAX;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest) {
            smallest = arr[i];
            result = {{smallest, i}};
        } else if (arr[i] % 2 == 0 && arr[i] == smallest) {
            result.push_back({{arr[i], i}});
        }
    }

    return result.empty() ? vector<pair<int, int>>{} : result;
}