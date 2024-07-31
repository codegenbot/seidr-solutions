#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
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

std::vector<int> incr_list(const std::vector<int> &a) {
    std::vector<int> result;
    for (int i = 0; i < a.size(); i++) {
        result.push_back(a[i] + 1);
    }
    return result;
}

int main() {
    assert(issame(incr_list(std::vector<int>{5, 2, 5, 2, 3, 3, 9, 0, 123}), incr_list(std::vector<int>{6, 3, 6, 3, 4, 4, 10, 1, 124})));
    return 0;
}