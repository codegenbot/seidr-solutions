#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

std::vector<int> sort_third(std::vector<int> vec) {
    std::sort(vec.begin() + 2, vec.end());
    return vec;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), std::vector<int>{2, 6, 3, 4, 8, 9, 5, 1}));
    return 0;
}