vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;

    if (arr.empty()) return result;

    int minEvenValue = INT_MAX;
    int minIndex = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenValue) {
            minEvenValue = arr[i];
            minIndex = i;
        }
    }

    result.push_back({minEvenValue, minIndex});

    return result;
}