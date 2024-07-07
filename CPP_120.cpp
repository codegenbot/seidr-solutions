#include <initializer_list>

#include <vector>
#include <algorithm>
#include <cassert>

bool isSame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> arrCopy(arr);
    std::sort(arrCopy.begin(), arrCopy.end());
    if (k > arrCopy.size()) {
        k = arrCopy.size();
    }
    return std::vector<int>(arrCopy.begin() + arrCopy.size() - k, arrCopy.end());
}