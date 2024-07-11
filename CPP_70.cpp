#include <memory>
#include <algorithm>

bool issame(const std::pmr_vector<int>& a, const std::pmr_vector<int>& b) {
    return a == b;
}

std::pmr_vector<int> strange_sort_list(std::pmr_vector<int> lst) {
    std::pmr_vector<int> result;
    while (!lst.empty()) {
        int min_val = *std::min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        lst.erase(std::remove(lst.begin(), lst.end(), min_val), lst.end());
        if (!lst.empty()) {
            int max_val = *std::max_element(lst.begin(), lst.end());
            result.push_back(max_val);
            auto it = std::remove(lst.end() - 1, lst.begin() - 1, --max_val);
            lst.erase(it, lst.end());
        }
    }
    return result;
}

int main() {
    assert(issame(std::pmr_vector<int>(strange_sort_list({1, 1, 1, 1, 1})), std::pmr_vector<int>({1, 1, 1, 1, 1})));
}