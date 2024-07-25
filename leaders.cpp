vector<int> findLeaders(vector<int> arr) {
    int n = arr.size();
    vector<int> leaders;
    int curr_leader = INT_MIN;
    
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= curr_leader) {
            curr_leader = arr[i];
            leaders.push_back(arr[i]);
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    return leaders;
}