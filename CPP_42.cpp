#include <iostream>
#include <vector>

std::vector<int> incr_list(const std::vector<int>& l1, const std::vector<int>& l2) {
    std::vector<int> result;
    for (int i = 0; i < l1.size(); i++) {
        result.push_back(l1[i] + 1);
    }
    return result;
}

bool is_same(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> v1 = {1, 2, 3};
    std::vector<int> v2 = incr_list(v1);
    assert(is_same(incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123}), {6, 3, 6, 3, 4, 4, 10, 1, 124}));
    return 0;
}