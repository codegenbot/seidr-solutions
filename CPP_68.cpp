vector<int> pluck(vector<int> arr) {
    vector<int> result;
    if (arr.empty()) return result;

    int smallest_even = INT_MAX;
    int index_smallest_even = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            index_smallest_even = i;
        }
    }

    if (smallest_even != INT_MAX) {
        result.push_back(smallest_even);
        result.push_back(index_smallest_even);
    } else {
        result.push_back(0);
        result.push_back(-1);
    }

    return result;
}