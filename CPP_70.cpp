#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        auto it_min = min_element(lst.begin(), lst.end());
        int max_val = *max_element(it_min, lst.end());
        if (min_val == max_val) {
            result.push_back(min_val);
            lst.clear();
        } else {
            result.push_back(min_val);
            it_min = lst.erase(it_min);
            result.push_back(*it_min);
        }
    }
    return result;
}