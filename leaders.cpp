```cpp
std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    int max_seen = arr.back(); // initialize with rightmost element
    for (int i = n - 1; i >= 0; --i) {
        if (arr[i] >= max_seen) {
            res.push_back(arr[i]);
            max_seen = arr[i]; // update max seen
        }
    }
    return res;
}