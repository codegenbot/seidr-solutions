#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> res(k);
    std::partial_sort(arr.begin(), arr.end() - k + 1, arr.end());
    for (int i = 0; i < k; i++) {
        res[i] = arr[arr.size() - k + i];
    }
    return res;
}