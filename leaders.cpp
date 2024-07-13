std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    
    for(int i=0; i<n; i++) {
        if(i == n-1 || arr[i] >= max) {
            max = arr[i];
            res.push_back(max);
        }
    }
    
    return res;
}