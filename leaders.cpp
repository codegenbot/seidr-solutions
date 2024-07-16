vector<int> calculateLeaders(vector<int> arr) {
    int n = arr.size();
    vector<int> res;
    int maxSoFar = arr.back();
    
    for(int i=n-2; i>=0; i--){
        if(arr[i] >= maxSoFar){
            res.push_back(arr[i]);
            maxSoFar = arr[i];
        }
    }
    
    return res;
}