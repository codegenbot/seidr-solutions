vector<int> findLeaders(const vector<int>& arr) {
    vector<int> leaders;
    int n = arr.size();
    int max_right = INT_MIN;
    
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= max_right) {
            leaders.push_back(arr[i]);
            max_right = arr[i];
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    return leaders;
}