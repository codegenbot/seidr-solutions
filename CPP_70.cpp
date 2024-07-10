#include <vector>
#include <algorithm>

bool isSame(int a, int b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        int min_val = *std::min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        lst.erase(std::remove(lst.begin(), lst.end(), min_val), lst.end());
        if (!lst.empty()) {
            int max_val = *std::max_element(lst.begin(), lst.end());
            if (isSame(min_val, max_val)) {
                while (!lst.empty() && *lst.rbegin() == max_val) {
                    result.push_back(max_val);
                    lst.pop_back();
                }
            } else {
                result.push_back(max_val);
                lst.erase(std::remove(lst.begin(), lst.end(), max_val), lst.end());
            }
        }
    }
    return result;
}