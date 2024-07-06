vector<int> pluck(vector<int> arr) {
    vector<int> result;
    if (arr.empty()) return result;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0) {
            result.push_back(arr[i]);
        }
    }

    return result;
}