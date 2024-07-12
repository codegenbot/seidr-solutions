vector<int> leaders(const vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    int max_right = INT_MIN;
    for (int i = n - 1; i >= 0; --i) {
        if (arr[i] >= max_right) {
            max_right = arr[i];
            result.push_back(max_right);
        }
    }
    reverse(result.begin(), result.end());
    return result;
}