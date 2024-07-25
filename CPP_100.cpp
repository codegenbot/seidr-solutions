#include <vector>
#include <numeric>
#include <algorithm>
#include <cassert>

std::vector<int> make_a_pile(int n) {
    std::vector<int> result(n);
    std::iota(result.begin(), result.end(), n);
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(make_a_pile(8), std::vector<int>({8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}