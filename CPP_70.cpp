```cpp
#include <vector>
#include <algorithm>

bool isSame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> strangeSortVector(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    while (!lst.empty()) {
        int minVal = *std::min_element(lst.begin(), lst.end());
        int maxVal = *std::max_element(lst.begin(), lst.end());
        result.push_back(minVal);
        result.push_back(maxVal);
        auto newEnd = std::remove(lst.begin(), lst.end(), minVal);
        lst.erase(newEnd, lst.end());
        newEnd = std::remove(lst.begin(), lst.end(), maxVal);
        lst.erase(newEnd, lst.end());
    }

    return result;
}