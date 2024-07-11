vector<int> findLeaders(vector<int> arr) {
    vector<int> result;
    int n = arr.size();
    int max_so_far = INT_MIN;
    
    for(int i = n-1; i >= 0; i--) {
        if(arr[i] >= max_so_far) {
            result.push_back(arr[i]);
            max_so_far = arr[i];
        }
    }
    
    reverse(result.begin(), result.end());
    
    return result;
}