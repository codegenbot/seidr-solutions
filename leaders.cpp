vector<int> leaders(vector<int>& arr) {
    vector<int> res;
    int n = arr.size();
    if(n == 0) return res;

    for(int i=n-1; i>=0; --i){
        bool leaderCheck = true;
        for(int j=i+1; j<n; ++j){
            if(arr[j] >= arr[i]){
                leaderCheck = false;
                break;
            }
        }
        if(leaderCheck) res.push_back(arr[i]);
    }

    return res;
}