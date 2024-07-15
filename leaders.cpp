vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int rightmost_max = arr.back();
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (arr[i] >= rightmost_max) {
            result.push_back(arr[i]);
            rightmost_max = arr[i];
        }
    }
    return result;
}