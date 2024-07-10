#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> sort_even(const std::vector<float>& v) {
    std::vector<float> result = v;
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), std::vector<float>{-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
}