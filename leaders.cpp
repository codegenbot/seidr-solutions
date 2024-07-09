std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    
    for(int i=0; i<n; i++) {
        if(res.empty() || arr[i] >= res.back()) 
            res.push_back(arr[i]);
        else
            break;
    }
    
    // Reverse the vector before returning
    for(int i = 0; i < res.size()/2; i++) {
        int temp = res[i];
        res[i] = res[res.size()-1-i];
        res[res.size()-1-i] = temp;
    }
    
    return res;
}