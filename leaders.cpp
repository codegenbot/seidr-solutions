std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    
    for(int i=n-1; i>=0; i--) {
        bool isLeader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[i] < arr[j])
                isLeader = false;
        }
        if(isLeader)
            res.push_back(arr[i]);
    }
    
    return res;
}

input = leaders(input);