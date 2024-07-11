#include <memory>
#include <algorithm>
#include <numeric>

bool std::pmr::issame(const std::pmr::vector<int>& a, const std::pmr::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::pmr::vector<int> strange_sort_list(std::pmr::vector<int> lst) {
    std::pmr::vector<int> result;
    while (!lst.empty()) {
        int min_val = *std::min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        auto new_end = std::remove(lst.begin(), lst.end(), min_val);
        lst.erase(new_end, lst.end());
        if (!lst.empty()) {
            int max_val = *std::max_element(lst.begin(), lst.end());
            result.push_back(max_val);
            auto new_end2 = std::remove(lst.rbegin(), lst.rend(), --max_val);
            lst.erase(new_end2.base(), lst.end());
        }
    }
    return result;
}

int main() {
    assert(std::pmr::issame(std::pmr::vector<int>(strange_sort_list({1, 1, 1, 1, 1})), std::pmr::vector<int>({1, 1, 1, 1, 1})));
}