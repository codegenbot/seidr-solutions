```cpp
std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    int maxSeen = arr.back(); // initialize with the rightmost element

    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= maxSeen) {
            res.push_back(arr[i]);
            maxSeen = arr[i]; // update maximum seen
        }
    }

    return res;
}