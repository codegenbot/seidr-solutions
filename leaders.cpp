vector<int> findLeaders(const vector<int>& v) {
    vector<int> leaders;
    int n = v.size();
    int max_right = INT_MIN;
    
    for (int i = n - 1; i >= 0; i--) {
        if (v[i] >= max_right) {
            max_right = v[i];
            leaders.push_back(max_right);
        }
    }
    
    reverse(leaders.begin(), leaders.end());
    
    return leaders;
}