#include <vector>
#include <algorithm>

bool issame(std::initializer_list<int> a, std::initializer_list<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    return std::vector<int>(a) == std::vector<int>(b);
}

std::initializer_list<int> make_a_pile(int n) {
    for (int i = 1; i <= n; i++) {
        yield i;
    }
}