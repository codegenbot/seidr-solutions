#include <vector>
#include <cassert>

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(is_same(factorize(3 * 2 * 3), std::vector<int>{2, 3, 3}));
    return 0;
}