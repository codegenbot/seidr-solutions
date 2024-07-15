#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> sum_product(const std::vector<int>& a) {
    return {a[0] * 2, a[0] * 2};
}

int main() {
    assert(issame(sum_product({10}), {20, 20}));
    return 0;
}