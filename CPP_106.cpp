#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    std::vector<int> f = {1, 2, 3};
    assert(!issame(f, {1, 2, 6}));
    return 0;
}