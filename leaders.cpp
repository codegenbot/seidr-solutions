std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    
    if(n == 0) return res; 
    int maxRight = arr.back(); 
    res.push_back(maxRight);
    
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= maxRight)
            res.push_back(arr[i]), maxRight = arr[i]; 
    }
    
    return res;
}