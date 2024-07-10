```cpp
vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    if(n == 0) return {};

    int leader = arr[n-1];
    for(int i=n-2; i>=0; --i){
        if(arr[i] >= leader){
            leader = arr[i];
        }
    }

    vector<int> res;
    for(int i=0; i<n; ++i){
        bool leaderCheck = true;
        for(int j=i+1; j<n; ++j){
            if(arr[j] >= arr[i]){
                leaderCheck = false;
                break;
            }
        }
        if(leaderCheck && arr[i] <= leader) res.push_back(arr[i]);
    }

    return res;
}