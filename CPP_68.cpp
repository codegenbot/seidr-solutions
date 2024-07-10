vector<int> pluck(vector<int> arr) {
    vector<int> result;
    if (arr.empty()) return result;

    int minEven = INT_MAX;
    int index = -1;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            index = i;
        }
    }

    if (index != -1) {
        result.push_back(minEven);
        result.push_back(index);
    } else {
        result.push_back(0);
        result.push_back(-1);
    }

    return result;
}