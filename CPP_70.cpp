```cpp
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    if (lst.empty()) return lst;

    std::vector<int> result;
    while (!lst.empty()) {
        int minVal = *std::min_element(lst.begin(), lst.end());
        int maxVal = *std::max_element(lst.begin(), lst.end());
        result.push_back(minVal);
        result.push_back(maxVal);
        lst.erase(std::remove(lst.begin(), lst.end(), minVal), lst.end());
        lst.erase(std::remove(lst.begin(), lst.end(), maxVal), lst.end());
    }

    return result;
}