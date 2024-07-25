#include <algorithm>
#include <vector>
#include <limits>

bool issame(const std::vector<int>& vec1, const std::vector<int>& vec2) {
    if (vec1.size() != vec2.size()) return false;
    for (int i = 0; i < vec1.size(); ++i) {
        if (vec1[i] != vec2[i]) return false;
    }
    return true;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        auto it = std::min_element(lst.begin(), lst.end());
        result.push_back(*it);
        lst.erase(it);

        if (issame({*it}, result)) {
            while (issame(result, {result[0]})) {
                it = std::min_element(lst.begin(), lst.end());
                result.push_back(*it);
                lst.erase(it);
            }
        } else {
            auto max_it = std::max_element(lst.begin(), lst.end());
            result.push_back(*max_it);
            lst.erase(max_it);
        }
    }
    return result;
}