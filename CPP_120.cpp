```
#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int> arr, int k) {
    if (k > arr.size()) {
        return {};
    }
    std::vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    return result;
}