vector<int> findLeaders(const vector<int>& arr) {
    vector<int> leaders;
    int n = arr.size();
    if (n == 0) {
        return leaders;
    }

    int curLeader = arr[n - 1];
    leaders.push_back(curLeader);

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= curLeader) {
            curLeader = arr[i];
            leaders.push_back(curLeader);
        }
    }

    reverse(leaders.begin(), leaders.end());
    return leaders;
}