#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    std::vector<int> min_max(lst);
    std::sort(min_max.begin(), min_max.end());

    while (!min_max.empty()) {
        result.push_back(*min_max.begin());
        min_max.erase(min_max.begin());
        if (!min_max.empty())
            min_max.erase(--min_max.end());
    }

    return result;
}