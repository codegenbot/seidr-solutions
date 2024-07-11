vector<int> findLeaders(vector<int> arr) {
    vector<int> leaders;
    int n = arr.size();
    if(n == 0) return leaders;
    
    leaders.push_back(arr[n-1]);
    int maxLeader = arr[n-1];
    
    for(int i = n-2; i >= 0; i--) {
        if(arr[i] >= maxLeader) {
            leaders.push_back(arr[i]);
            maxLeader = arr[i];
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    
    return leaders;
}