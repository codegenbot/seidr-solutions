std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    for (int i = n - 1; i >= 0; i--) {
        if (res.empty() || arr[i] >= max_right) {
            res.push_back(arr[i]);
            max_right = arr[i];
        }
    }
    return res;
}