#include <vector>
#include <cassert>
#include <algorithm>

std::vector<int> make_a_pile(int n) {
    std::vector<int> result;
    for (int i = 0; i < n; ++i) {
        result.push_back(8 + i * 2);
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}