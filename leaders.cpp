vector<int> findLeaders(vector<int> arr) {
    vector<int> leaders;
    int n = arr.size();
    int maxRight = INT_MIN;
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            leaders.push_back(arr[i]);
            maxRight = arr[i];
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}