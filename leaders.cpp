vector<int> findLeaders(vector<int> arr) {
    vector<int> leaders;
    int n = arr.size();
    int max_right = arr[n - 1];
    leaders.push_back(max_right);
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= max_right) {
            leaders.push_back(arr[i]);
            max_right = arr[i];
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}