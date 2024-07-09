std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    
    res.push_back(arr.back()); // Initialize result with the rightmost element
    
    for(int i=n-2; i>=0; i--) { 
        if(arr[i] >= res.back())  
            res.push_back(arr[i]);
    }
    
    return res;
}