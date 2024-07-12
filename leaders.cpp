vector<int> findLeaders(vector<int> arr) {
    int n = arr.size();
    vector<int> ans;
    int max_right = INT_MIN;
    
    for (int i = n-1; i >= 0; i--) {
        if (arr[i] >= max_right) {
            ans.push_back(arr[i]);
            max_right = arr[i];
        }
    }
    
    reverse(ans.begin(), ans.end());
    
    return ans;
}