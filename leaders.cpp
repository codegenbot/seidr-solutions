std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    int max_right = arr.back(); 
    for (int i = 0; i < n; i++) { 
        if (arr[i] >= max_right) {
            res.push_back(arr[i]);
            max_right = arr[i]; 
        }
    }
    return res;
}