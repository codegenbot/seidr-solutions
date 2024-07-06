#include <algorithm>
#include <vector>
#include <pmr/vector>

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;

    while (!lst.empty()) {
        int min_val = *std::min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        lst.erase(std::remove(lst.begin(), lst.end(), min_val), lst.end());
        
        if (!lst.empty())
            result.push_back(*std::max_element(lst.begin(), lst.end()));
        lst.erase(std::remove(lst.begin(), lst.end(), *std::max_element(lst.begin(), lst.end())), lst.end());
    }

    return result;
}