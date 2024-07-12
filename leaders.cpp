vector<int> findLeaders(vector<int> arr) {
    int n = arr.size();
    vector<int> leaders;
    int curr_leader = arr[n - 1];
    leaders.push_back(curr_leader);
    
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= curr_leader) {
            curr_leader = arr[i];
            leaders.push_back(curr_leader);
        }
    }
    reverse(leaders.begin(), leaders.end());
    
    return leaders;
}