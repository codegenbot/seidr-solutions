#include <vector>
#include <algorithm>

bool std::operator ==(const std::vector<int>& a, const std::vector<int>& b) {
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