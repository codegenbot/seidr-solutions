vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> res;
    
    int maxSeenSoFar = arr.back();  
    for(int i=n-2; i>=0; i--) {  
        if(arr[i] >= maxSeenSoFar) {
            res.push_back(arr[i]);
            maxSeenSoFar = arr[i];
        }
    }
    
    reverse(res.begin(), res.end());
    return res;
}