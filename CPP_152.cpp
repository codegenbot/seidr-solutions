#include <vector>
#include <cassert>
#include <algorithm>

std::vector<int> compare(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result(a.size());
    for (size_t i = 0; i < a.size(); ++i) {
        result[i] = std::abs(a[i] - b[i]);
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(compare({1, 2, 3, 5}, {-1, 2, 3, 4}), {2, 0, 0, 1}));
    return 0;
}