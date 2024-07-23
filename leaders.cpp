vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    if(n == 0) return leaders;
    
    int max_seen = arr[n-1]; // start with the rightmost element
    
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= max_seen) {
            leaders.push_back(arr[i]);
            max_seen = arr[i]; // update the maximum seen so far
        }
    }
    
    return leaders;
}