#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> incr_list(const std::vector<int>& a) {
    std::vector<int> result;
    for (int val : a) {
        result.push_back(val + 1);
    }
    return result;
}

int main() {
    assert(issame(incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123}), incr_list({6, 3, 6, 3, 4, 4, 10, 1, 124})));
    return 0;
}