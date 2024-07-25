#include <vector>
#include <algorithm>

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    while (!lst.empty()) {
        int min = *min_element(lst.begin(), lst.end());
        int max = *max_element(lst.begin(), lst.end());
        result.push_back(min);
        lst.erase(remove(lst.begin(), lst.end(), min), lst.end());
        result.push_back(max);
        lst.erase(remove(lst.begin(), lst.end(), max), lst.end());
    }

    return result;
}