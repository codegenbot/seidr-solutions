#include <algorithm>
#include <vector>

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) {
        return result;
    }
    
    std::sort(lst.begin(), lst.end());
    
    while (!lst.empty()) {
        int minVal = *std::min_element(lst.begin(), lst.end());
        result.push_back(minVal);
        auto it = std::remove_if(lst.begin(), lst.end(), [minVal](int x) { return x == minVal; });
        lst.erase(it, lst.end());
    }
    
    return result;
}