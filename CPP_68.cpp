vector<int> pluck(vector<int> arr) {
    int smallestEven = INT_MAX;
    int index = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEven) {
            smallestEven = arr[i];
            index = i;
        }
    }

    vector<int> result;
    if (!arr.empty()) {
        result.push_back(smallestEven);
        result.push_back(index);
    } else {
        result.push_back(0);
        result.push_back(0);
    }

    return result;
}