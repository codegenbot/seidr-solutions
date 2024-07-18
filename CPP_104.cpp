#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::is_permutation(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(std::vector<int>{135, 103, 31}, std::vector<int>{31, 135}));
    return 0;
}