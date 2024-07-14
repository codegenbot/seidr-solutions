std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;

    int maxRt = arr[n-1];  // maximum element to the right

    for(int i=n-2; i>=0; i--) {  
        if(arr[i] >= maxRt) {
            res.push_back(arr[i]);
            maxRt = arr[i];
        }
    }
    
    return res;
}