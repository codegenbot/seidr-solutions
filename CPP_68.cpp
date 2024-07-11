vector<pair<int, int>> pluck(vector<int> arr) {
    vector<pair<int, int>> result;

    if (arr.empty()) {
        return result;
    }

    int smallest = INT_MAX;
    int smallest_index = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest) {
            smallest = arr[i];
            smallest_index = i;
        }
    }

    if (smallest != INT_MAX) {
        result.push_back({smallest, smallest_index});
    } else {
        result.push_back({});
    }

    return result;
}