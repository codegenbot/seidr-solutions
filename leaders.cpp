vector<int> findLeaders(vector<int> arr) {
    vector<int> result;
    int n = arr.size();
    int maxRight = arr[n-1];
    result.push_back(maxRight);

    for (int i = n-2; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            maxRight = arr[i];
            result.push_back(maxRight);
        }
    }

    reverse(result.begin(), result.end());
    return result;
}