#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int maximum(const std::vector<int>& vec, int defaultValue) {
    if (vec.empty()) {
        return defaultValue;
    }
    return *std::max_element(vec.begin(), vec.end());
}

int main() {
    assert(issame(std::vector<int>{1, 2, 3, -23, 243, -400, 0}, std::vector<int>{1, 2, 3, -23, 243, -400, 0}));
    assert(maximum({1, 2, 3, -23, 243, -400, 0}, 0) == 243);
    return 0;
}