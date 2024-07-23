vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    if(n == 0) return leaders;
    
    int max_right = arr[n-1];
    leaders.push_back(max_right);
    
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= max_right) {
            max_right = arr[i];
            leaders.push_back(max_right);
        }
    }
    
    return leaders;
}