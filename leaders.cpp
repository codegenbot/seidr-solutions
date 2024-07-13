std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    
    if(n == 0) return res;
    
    res.push_back(arr.back()); // rightmost element is always a leader
    
    for(int i=n-2; i>=0; i--) {
        if(arr[i] >= res.back()) {
            res.push_front(arr[i]); 
        }
    }
    
    return res;
}