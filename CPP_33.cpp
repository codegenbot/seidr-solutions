#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> sort_third(std::vector<int> l) {
    std::sort(l.begin(), l.end(), [](int a, int b) {
        return a % 3 == 0 ? (b % 3 == 0 ? a < b : true) : (b % 3 == 0 ? false : a < b);
    });
    return l;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}
int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    return 0;
}