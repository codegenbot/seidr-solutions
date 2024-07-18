#include <algorithm>
#include <vector>

std::vector<int> solve(std::vector<int> arr, int k) {
    sort(arr.begin(), arr.end());
    arr.resize(k);
    return arr;
}