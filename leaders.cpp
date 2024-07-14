std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    
    res.push_back(arr[n-1]);
    
    for(int i=n-2; i>=0; i--) {  
        if(arr[i] >= arr[i+1]) {
            res.push_back(arr[i]);
        }
    }
    
    return res;
}