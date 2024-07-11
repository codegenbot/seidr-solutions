#include <pmr.h>
#include <algorithm>

bool issame(const pmr_vector<int>& a, const pmr_vector<int>& b) {
    return a == b;
}

pmr_vector<int> strange_sort_list(pmr_vector<int> lst) {
    pmr_vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        lst.erase(std::remove(lst.begin(), lst.end(), min_val), lst.end());
        if (!lst.empty()) {
            int max_val = *max_element(lst.begin(), lst.end());
            result.push_back(max_val);
            lst.erase(std::remove(lst.end() - 1, lst.begin() - 1, --max_val), lst.end());
        }
    }
    return result;
}

int main() {
    assert(issame(pmr_vector<int>(strange_sort_list({1, 1, 1, 1, 1})), pmr_vector<int>({1, 1, 1, 1, 1})));
}