vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;
    if (arr.empty()) return {};

    int minEvenValue = INT_MAX;
    int minValueIndex = -1;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minValueIndex = i;
        }
    }

    if (minValueIndex != -1) {
        result.push_back({minEvenValue, minValueIndex});
    } else {
        result.push_back({{}, -1});
    }

    return result;
}