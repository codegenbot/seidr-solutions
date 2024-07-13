std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    
    if(n == 0) return res;
    
    int maxSoFar = arr[n-1];
    res.push_back(maxSoFar);
    
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= maxSoFar) {
            maxSoFar = arr[i];
            res.push_back(maxSoFar);
        }
    }
    
    return res;
}