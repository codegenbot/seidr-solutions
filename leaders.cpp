#include <vector>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    for (int i = n - 1; i >= 0; --i) {
        while (!res.empty() && res.back() < arr[i]) {
            res.pop_back();
        }
        if (res.empty() || res.back() <= arr[i])
            res.push_back(arr[i]);
    }
    return res;
}