std::vector<int> leaders(std::vector<int>& arr) {
    std::vector<int> res;
    int n = arr.size();
    if(n == 0) return res;

    int maxRight = arr[n-1];
    for(int i=n-2; i>=0; --i){
        if(arr[i] >= maxRight){
            maxRight = arr[i];
            res.push_back(maxRight);
        }
    }

    return res;
}