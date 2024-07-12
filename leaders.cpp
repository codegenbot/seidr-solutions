vector<int> findLeaders(vector<int> arr) {
    vector<int> leaders;
    int n = arr.size();
    int leader = INT_MIN;
    for (int i = n - 1; i >= 0; --i) {
        if (arr[i] >= leader) {
            leader = arr[i];
            leaders.push_back(leader);
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}