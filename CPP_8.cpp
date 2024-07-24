#include <vector>
#include <cassert>

bool issame(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.first == b.first && a.second == b.second;
}

int main() {
    assert(issame(sum_product({10}), {10, 10}));
    return 0;
}