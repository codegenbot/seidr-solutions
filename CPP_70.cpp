```cpp
#include <algorithm>
#include <vector>

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        int min_val = *std::min_element(lst.begin(), lst.end());
        int max_val = *std::max_element(lst.begin(), lst.end());
        if (min_val == max_val) {
            result.push_back(min_val);
            lst.pop_back();
        } else {
            result.push_back(min_val);
            auto it = std::find(lst.begin(), lst.end(), max_val);
            lst.erase(it);
            result.push_back(max_val);
        }
    }
    return result;
}