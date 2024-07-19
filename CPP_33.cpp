#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> sort_third(std::vector<int> v) {
    std::sort(v.begin(), v.end());
    return v;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
}