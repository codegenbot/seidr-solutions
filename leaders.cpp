std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    int max_right = arr.back(); // initialize max_right
    for (int i = n - 1; i >= 0; i--) { 
        if (arr[i] >= max_right) { 
            res.push_back(arr[i]);
            max_right = arr[i]; // update max_right
        }
    }
    return res;
}