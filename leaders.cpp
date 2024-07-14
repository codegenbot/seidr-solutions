std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    
    int maxRight = arr[n - 1];
    for(int i=n-2; i>=0; i--) {  
        if(arr[i] >= maxRight) {
            res.push_back(arr[i]);
            maxRight = arr[i];
        }
    }
    
    return res;