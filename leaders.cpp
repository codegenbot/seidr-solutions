std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    
    if(n == 0) return res;
    
    for(int i=n-1; i>=0; i--) {
        int max = arr[i];
        bool is_leader = true;
        
        for(int j=i+1; j<n; j++) {
            if(arr[j] >= max) {
                is_leader = false;
                break;
            }
        }
        
        if(is_leader) res.push_back(max);
    }
    
    return res;
}