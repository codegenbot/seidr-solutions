#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (std::find(b.begin(), b.end(), a[i]) == b.end()) {
            return false;
        }
    }
    return true;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    auto min_max = [](const std::vector<int>& v) {
        int min_val = *std::min_element(v.begin(), v.end());
        int max_val = *std::max_element(v.begin(), v.end());
        return make_pair(min_val, max_val);
    };

    while (!lst.empty()) {
        auto [min, max] = min_max(lst);
        result.push_back(min);
        lst.erase(std::remove_if(lst.begin(), lst.end(),
            [&](int x) { return x == min; }), lst.end());
        if (!lst.empty())
            result.push_back(max);
        lst.erase(std::remove_if(lst.begin(), lst.end(),
            [&](int x) { return x == max; }), lst.end());
    }
    return result;
}