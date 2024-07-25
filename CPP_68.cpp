vector<pair<int, int>> pluck(vector<int> arr) {
    if (arr.empty()) {
        return {};
    }
    int smallest = INT_MAX;
    int index = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest) {
            smallest = arr[i];
            index = i;
        }
    }
    return {{smallest, index}};
}