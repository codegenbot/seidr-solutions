#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
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
    assert(issame(std::vector<int>(strange_sort_vector({1, 1, 1, 1, 1})), std::vector<int>({1, 1, 1, 1, 1})));
}