#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int> arr, int k) {
    if (k > arr.size()) {
        return {};
    }
    vector<int> result(arr.rbegin(), arr.rbegin() + k);
    sort(result.begin(), result.end());
    for (int i = 0; i < k/2; ++i) {
        swap(result[i], result[k-i-1]);
    }
    if(k % 2 != 0) {
        std::reverse(result.begin()+1, result.begin()+k);
    }
    return result;
}