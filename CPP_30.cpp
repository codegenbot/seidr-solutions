#include <iostream>
#include <vector>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> get_positive(const std::vector<float>& l) {
    std::vector<float> positive_nums;
    for (size_t i = 0; i < l.size(); i++) {
        if (l[i] > 0) {
            positive_nums.push_back(l[i]);
        }
    }
    return positive_nums;
}

int main() {
    assert(issame(get_positive({}), {}));
    assert(issame(get_positive({-1, 2, -3, 4, -5}), {2, 4}));
    assert(issame(get_positive({1, 2, 3, 4, 5}), {1, 2, 3, 4, 5}));
    assert(issame(get_positive({-1, -2, -3, -4, -5}), {}));
    assert(issame(get_positive({0, 0, 0, 0, 0}), {}));
    return 0;
}