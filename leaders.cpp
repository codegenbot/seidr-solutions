vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    int maxRight = arr[n-1];
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= maxRight) {
            maxRight = arr[i];
            res.push_back(maxRight);
        }
    }
    
    return res;
}