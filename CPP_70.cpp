#include <vector>
#include <algorithm>

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        int min = *std::min_element(lst.begin(), lst.end());
        result.push_back(min);
        lst.erase(std::remove(lst.begin(), lst.end(), min), lst.end());
        if (!lst.empty())
            min = *std::min_element(lst.begin(), lst.end());
        result.push_back(min);
        lst.erase(std::remove(lst.begin(), lst.end(), min), lst.end());
    }
    return result;
}