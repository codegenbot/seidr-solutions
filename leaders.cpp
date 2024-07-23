vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int max = arr.back();
    for (int i = arr.size() - 1; i >= 0; --i) {
        if (arr[i] >= max) {
            result.push_back(arr[i]);
            max = arr[i];
        }
    }
    return result;
}