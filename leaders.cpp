std::vector<int> leaders(std::vector<int>& arr) {
    std::vector<int> res;
    int n = arr.size();
    if(n == 0) return res;

    int leader = -1;
    for(int i=n-1; i>=0; --i){
        if(arr[i] >= leader){
            leader = arr[i];
            res.push_back(leader);
        }
    }

    return res;
}