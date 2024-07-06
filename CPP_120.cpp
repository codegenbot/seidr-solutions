#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result(arr.size());
    copy_if(arr.begin(), arr.end(), result.begin(),
             [k](int x) { return --k > 0; });
    sort(result.begin(), result.end());
    return std::vector<int>(result.begin(), result.begin() + min(k, (int)size()));
}