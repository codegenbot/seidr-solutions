vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int maxRight = arr.back();
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            result.push_back(arr[i]);
            maxRight = arr[i];
        }
    }
    // Update maxRight
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] >= maxRight)
            maxRight = arr[i];
    }
    return vector<int>({maxRight});
}