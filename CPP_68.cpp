Here is the completed code:

vector<pair<int, int>> pluck(vector<int> arr) {
    if (arr.empty()) return {};

    vector<pair<int, int>> result;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && ((result.empty()) || (arr[i] < result[0].first || (arr[i] == result[0].first && i < result[0].second)))) {
            result = {{arr[i], i}};
        } else if (arr[i] % 2 == 0 && arr[i] == result[0].first) {
            result = {{arr[i], i}};
        }
    }

    return result;
}