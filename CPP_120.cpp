#include <vector>

int maximum(const std::vector<int>& arr, int k) {
    sort(arr.begin(), arr.end(), std::greater<int>());
    arr.resize(k);
    return arr[k-1];
}