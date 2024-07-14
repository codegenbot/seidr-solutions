std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res(arr.back());
    int max_right = arr.back(); 
    for (int i = n - 2; i >= 0; i--) { 
        if (arr[i] >= max_right) {
            res.push_back(arr[i]);
            max_right = arr[i]; 
        }
    }
    return res;
}