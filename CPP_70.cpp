#include <algorithm>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    if (lst.empty()) return {};

    std::sort(lst.begin(), lst.end());

    for (int i = 0; i < lst.size(); i++) {
        if (i % 2 == 0)
            result.push_back(lst[0]);
        else
            result.push_back(lst.back());
        if (i % 2 != 0) {
            lst.erase(lst.begin());
        } else {
            lst.pop_back();
        }
    }

    return result;
}