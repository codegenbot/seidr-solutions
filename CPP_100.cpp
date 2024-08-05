#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> make_a_pile(int start) {
    std::vector<int> result;
    for (int i = 0; i < 8; ++i) {
        result.push_back(start + i * 2);
    }
    return result;
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
}