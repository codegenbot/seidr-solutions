vector<pair<int, int>> pluck(vector<int> arr) {
    if (arr.empty()) return {};

    vector<pair<int, int>> result;
    int minEvenValue = INT_MAX;
    int minIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minIndex = i;
        }
    }

    if (minIndex != -1) result.push_back({minEvenValue, minIndex});
    else result.push_back({});

    return result;
}