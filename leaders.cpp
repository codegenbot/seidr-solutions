std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    if(n == 0) return res;

    for(int i=n-1; i>=0; i--) {
        if(res.empty() || arr[i] >= res.back()) {
            res.push_back(arr[i]);
        }
    }

    reverse(res.begin(), res.end());
    return res;
}