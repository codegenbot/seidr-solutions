#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        int max_val = *max_element(lst.begin(), lst.end());
        for (int i = 0; i < lst.size(); ++i) {
            if (lst[i] == min_val)
                lst.erase(lst.begin() + i);
            else if (lst[i] == max_val)
                lst.erase(lst.begin() + i);
        }
        result.push_back(min_val);
        result.push_back(max_val);
    }
    return result;
}